Off statistics;                                     * turns off annoying statistics

Dimension 4;                                        * we are in the 4-dimensional spacetime

*** DECLARATIONS ***

s G,svp,ssp,svm,ssm,x,eta;                              * symbols
v P,p,q,qp,qm,k;                                    * vectors
f Basis,Proj,Gluon,Sp,Sm,K;                     * non-commuting functions
i mu,nu,i,j;                                        * indices


ExtraSymbols array,w;                               * array w for optimization terms


*** SPECIFICATIONS ***

l Kall = sum_(i,0,3,sum_(j,0,3,K(i,j) * x^(i+4*j)));


*** DEFINITIONS ***

id K(i?,j?)=Proj(i,p,P) * g_(0,mu) * Sp(q+eta*P) * Basis(j,q,P) * Sm(q+(eta-1)*P) * g_(0,nu) * Gluon(k,mu,nu);

id Gluon(k?,mu?,nu?) = G * (d_(mu,nu) - k(mu)*k(nu)/(k.k));
id Sp(q?) = (-i_ * g_(0,q) * svp + ssp * gi_(0));
id Sm(q?) = (-i_ * g_(0,q) * svm + ssm * gi_(0));

.sort

id Basis(0,p?,P?) = 1;
id Basis(1,p?,P?) = (-i_)*P.p*g_(0,P);
id Basis(2,p?,P?) = (-i_)*g_(0,p);
id Basis(3,p?,P?) = g_(0,p)*g_(0,P)-g_(0,P)*g_(0,p);


id Proj(0,p?,P?) = 1/4;
id Proj(1,p?,P?) = ((i_/4)*(P.p*g_(0,p)-p.p*g_(0,P)))/((P.p)^3-p.p*P.p*P.P);
id Proj(2,p?,P?) = ((i_/4)*(-(P.P*g_(0,p))+P.p*g_(0,P)))/((P.p)^2-p.p*P.P);
id Proj(3,p?,P?) = (g_(0,p)*g_(0,P)-g_(0,P)*g_(0,p))/(16*(P.p)^2-16*p.p*P.P);


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

#do i=0,3
#do j=0,3
l Kall'i''j' = Kall[x^{'i'+4*'j'}];   * collect coefficients of powers of x *
#enddo
#enddo

.sort

#write <bse_sc.c> "vec<cdouble> w(10000,0.);"
#write <bse_sc.c> "cdouble i_(0.,1.);"
#write <bse_sc.c> "%O"

#do i=0,3
#do j=0,3

#write <bse_sc.c> "kernel[SI_kernel(ip,izp,'i',iq,izq,'j')] += jacobians * weights * prefactor * %e", Kall'i''j'

#enddo
#enddo

.sort

.end
