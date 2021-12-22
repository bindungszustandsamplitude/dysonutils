Off statistics;                                     * turns off annoying statistics

Dimension 4;                                        * we are in the 4-dimensional spacetime

*** DECLARATIONS ***

s G,svp,ssp,svm,ssm,x,eta;                              * symbols
v P,p,q,qp,qm,k,K;                                    * vectors
f Basis,Proj,Gluon,Sp,Sm,Ker;                     * non-commuting functions
i mu,nu,i,j;                                        * indices


ExtraSymbols array,w;                               * array w for optimization terms


*** SPECIFICATIONS ***

l Kall = sum_(i,0,7,sum_(j,0,7,Ker(i,j) * x^(i+8*j)));


*** DEFINITIONS ***

id Ker(i?,j?)=Basis(i,q,-K,mu) * Sp(q+eta*P) * Basis(j,q,K,mu) * Sm(q+(eta-1)*P);

id Sp(q?) = (-i_ * g_(0,q) * svp + ssp * gi_(0));
id Sm(q?) = (-i_ * g_(0,q) * svm + ssm * gi_(0));

.sort

id Basis(0,p?,P?,mu?) =
i_*(g_(0,mu)-(g_(0,P)*P(mu))/P.P);

id Basis(1,p?,P?,mu?) =
g_(0,mu)*g_(0,P)-P(mu);

id Basis(2,p?,P?,mu?) =
P.p*(-g_(0,mu)*g_(0,p)+p(mu)+
((-P.p+g_(0,P)*g_(0,p))*P(mu))/P.P);

id Basis(3,p?,P?,mu?) =
(-i_)*(g_(0,mu)*g_(0,p)*g_(0,P)-g_(0,mu)*g_(0,P)*g_(0,p)-
2*g_(0,P)*p(mu)+2*g_(0,p)*P(mu));

id Basis(4,p?,P?,mu?) =
p(mu)-(P.p*P(mu))/P.P;

id Basis(5,p?,P?,mu?) =
(i_*P.p*g_(0,P)*(P.P*p(mu)-P.p*P(mu)))/P.P;

id Basis(6,p?,P?,mu?) =
(-i_)*g_(0,p)*(p(mu)-(P.p*P(mu))/P.P);

id Basis(7,p?,P?,mu?) =
((g_(0,p)*g_(0,P)-g_(0,P)*g_(0,p))*(-(P.P*p(mu))+
P.p*P(mu)))/P.P;


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

#write <norm_vc_ax.c> "vec<cdouble> w(1000,0.);"
#write <norm_vc_ax.c> "cdouble i_(0.,1.);"

#write <norm_vc_ax.c> "%O"



#do i=0,7
#do j=0,7

#write <norm_vc_ax.c> "K_norm[SI_K_norm('i','j',iq,iz)] = wj * %e", Kall'i''j'

#enddo
#enddo

.sort

.end
