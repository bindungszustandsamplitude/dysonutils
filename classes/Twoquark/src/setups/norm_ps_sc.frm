Off statistics;                                     * turns off annoying statistics

Dimension 4;                                        * we are in the 4-dimensional spacetime

*** DECLARATIONS ***

s G,svp,ssp,svm,ssm,x,eta;                              * symbols
v P,p,q,qp,qm,k,K;                                    * vectors
f Basis,Proj,Gluon,Sp,Sm,Ker;                     * non-commuting functions
i mu,nu,i,j;                                        * indices


ExtraSymbols array,w;                               * array w for optimization terms


*** SPECIFICATIONS ***

l Kall = sum_(i,0,3,sum_(j,0,3,Ker(i,j) * x^(i+4*j)));


*** DEFINITIONS ***

id Ker(i?,j?)=Basis(i,q,-K) * Sp(q+eta*P) * Basis(j,q,K) * Sm(q+(eta-1)*P);

id Sp(q?) = (-i_ * g_(0,q) * svp + ssp * gi_(0));
id Sm(q?) = (-i_ * g_(0,q) * svm + ssm * gi_(0));

.sort

id Basis(0,p?,P?) = g5_(0);
id Basis(1,p?,P?) = (-i_)*g5_(0)*g_(0,P);
id Basis(2,p?,P?) = (-i_)*P.p*g5_(0)*g_(0,p);
id Basis(3,p?,P?) = g5_(0)*(g_(0,p)*g_(0,P)-g_(0,P)*g_(0,p));


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

#write <norm_ps_sc.c> "vec<cdouble> w(1000,0.);"
#write <norm_ps_sc.c> "cdouble i_(0.,1.);"

#write <norm_ps_sc.c> "%O"



#do i=0,3
#do j=0,3

#write <norm_ps_sc.c> "K_norm[SI_K_norm('i','j',iq,iz)] = wj * %e", Kall'i''j'

#enddo
#enddo

.sort

.end
