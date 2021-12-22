Off statistics;                                     * turns off annoying statistics

Dimension 4;                                        * we are in the 4-dimensional spacetime

*** DECLARATIONS ***

s G,svp,ssp,svm,ssm,x,eta;                              * symbols
v P,p,q,qp,qm,k;                                    * vectors
f Basis,Proj,Gluon,Sp,Sm,K;                     * non-commuting functions
i mu,nu,i,j,ro;                                        * indices


ExtraSymbols array,w;                               * array w for optimization terms


*** SPECIFICATIONS ***

l Kall = sum_(i,0,7,sum_(j,0,7,K(i,j) * x^(i+8*j)));


*** DEFINITIONS ***

id K(i?,j?)=Proj(i,p,P,ro) * g_(0,mu) * Sp(q+eta*P) * Basis(j,q,P,ro) * Sm(q+(eta-1)*P) * g_(0,nu) * Gluon(k,mu,nu);

id Gluon(k?,mu?,nu?) = G * (d_(mu,nu) - k(mu)*k(nu)/(k.k));
id Sp(q?) = (-i_ * g_(0,q) * svp + ssp * gi_(0));
id Sm(q?) = (-i_ * g_(0,q) * svm + ssm * gi_(0));

.sort

id Basis(0,p?,P?,ro?) =
i_*(g_(0,mu)-(g_(0,P)*P(mu))/P.P);

id Basis(1,p?,P?,ro?) =
g_(0,mu)*g_(0,P)-P(mu);

id Basis(2,p?,P?,ro?) =
P.p*(-g_(0,mu)*g_(0,p)+p(mu)+
((-P.p+g_(0,P)*g_(0,p))*P(mu))/P.P);

id Basis(3,p?,P?,ro?) =
(-i_)*(g_(0,mu)*g_(0,p)*g_(0,P)-g_(0,mu)*g_(0,P)*g_(0,p)-
2*g_(0,P)*p(mu)+2*g_(0,p)*P(mu));

id Basis(4,p?,P?,ro?) =
p(mu)-(P.p*P(mu))/P.P;

id Basis(5,p?,P?,ro?) =
(i_*P.p*g_(0,P)*(P.P*p(mu)-P.p*P(mu)))/P.P;

id Basis(6,p?,P?,ro?) =
(-i_)*g_(0,p)*(p(mu)-(P.p*P(mu))/P.P);

id Basis(7,p?,P?,ro?) =
((g_(0,p)*g_(0,P)-g_(0,P)*g_(0,p))*(-(P.P*p(mu))+
P.p*P(mu)))/P.P;


id Proj(0,p?,P?,ro?) =
((-i_/8)*(((P.p)^2-p.p*P.P)*g_(0,mu)+
g_(0,P)*(-(P.p*p(mu))+p.p*P(mu))+
g_(0,p)*(P.P*p(mu)-P.p*P(mu))))/((P.p)^2-p.p*P.P);

id Proj(1,p?,P?,ro?) =
(-(P.p*(-2*P.p+g_(0,p)*g_(0,P)+g_(0,P)*g_(0,p))*P(mu))+
P.P*(2*P.p*g_(0,mu)*g_(0,p)+
(-2*P.p+g_(0,p)*g_(0,P)-g_(0,P)*g_(0,p))*p(mu)+
2*p.p*(-g_(0,mu)*g_(0,P)+P(mu))))/
(16*P.P*(-(P.p)^2+p.p*P.P));

id Proj(2,p?,P?,ro?) =
(P.P*(-g_(0,mu)*g_(0,p)+p(mu))+
P.p*(g_(0,mu)*g_(0,P)-2*P(mu))+g_(0,P)*g_(0,p)*P(mu))/
(8*((P.p)^3-p.p*P.p*P.P));

id Proj(3,p?,P?,ro?) =
((i_/32)*(g_(0,mu)*g_(0,p)*g_(0,P)-g_(0,mu)*g_(0,P)*
g_(0,p)-2*g_(0,P)*p(mu)+2*g_(0,p)*P(mu)))/
((P.p)^2-p.p*P.P);

id Proj(4,p?,P?,ro?) =
(-(P.P*p(mu))+P.p*P(mu))/(4*(P.p)^2-4*p.p*P.P);

id Proj(5,p?,P?,ro?) =
((i_/8)*(g_(0,P)*(-(((P.p)^2+2*p.p*P.P)*p(mu))+
3*p.p*P.p*P(mu))+
P.p*(((P.p)^2-p.p*P.P)*g_(0,mu)+
g_(0,p)*(3*P.P*p(mu)-3*P.p*P(mu)))))/
(P.p*((P.p)^2-p.p*P.P)^2);

id Proj(6,p?,P?,ro?) =
((i_/8)*((P.P)^2*(-(p.p*g_(0,mu))+3*g_(0,p)*p(mu))+
2*(P.p)^2*g_(0,P)*P(mu)+P.P*((P.p)^2*g_(0,mu)+
p.p*g_(0,P)*P(mu)-3*P.p*(g_(0,P)*p(mu)+
g_(0,p)*P(mu)))))/((P.p)^2-p.p*P.P)^2;

id Proj(7,p?,P?,ro?) =
(2*((P.p)^2-p.p*P.P)*(g_(0,mu)*g_(0,P)-P(mu))+
g_(0,p)*g_(0,P)*(3*P.P*p(mu)-3*P.p*P(mu))+
3*g_(0,P)*g_(0,p)*(-(P.P*p(mu))+P.p*P(mu)))/
(32*((P.p)^2-p.p*P.P)^2);



*** STATEMENTS ***

format C;
format float;
format O4;

trace4,0;
contract;

.sort

b x;                                  * has to be there, otherwise the optimization will include x's into the array variables *

.sort                                 * has to be there to prepare Kall for the optimization *

#optimize Kall

b x;                                  * re-bracketing after optimization, because optimization changes the Kall-expression. bracketing allows us to separate the powers of x in the next step *

.sort                                 * necessary, because of the order of commands (bracketing after locals) *

#do i=0,7
#do j=0,7
l Kall'i''j' = Kall[x^{'i'+8*'j'}];   * collect coefficients of powers of x *
#enddo
#enddo

.sort

#write <bse_vc.c> "vec<cdouble> w(10000,0.);"
#write <bse_vc.c> "cdouble i_(0.,1.);"
#write <bse_vc.c> "%O"

#do i=0,7
#do j=0,7

#write <bse_vc.c> "kernel[SI_kernel(ip,izp,'i',iq,izq,'j')] += jacobians * weights * prefactor * %e", Kall'i''j'

#enddo
#enddo

.sort

.end
