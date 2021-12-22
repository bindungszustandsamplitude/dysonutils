#include <iostream>
#include "../src/include/Quark.hpp"

int main(void) {

	dysonUtils::Quark q;                         // construct a quark
	q.setMass( 0.0038 );                         // up quark mass

	q.setNumerics("n_radial", 60);	             // 60 radial points
	q.setNumerics("n_angular", 16);              // 16 angular points
	q.setNumerics("upper_bound_radial", 1.e+6);  // set uv cutoff
	q.setNumerics("lower_bound_radial", 1.e-6);  // set ir cutoff

	q.setInteraction("lambda", 0.71);            // set lambda (MT)
	q.setInteraction("eta", 1.8);                // set eta (MT)

	q.generateReal();                            // calculate on the real axis
	q.generateShells(0.25, 20);                  // generate 20 shells with outer shell at 0.25 GeV²

	std::cout << "the quark mass is " << q.getMass() << std::endl;
	std::cout << "Z2 is " << q.getZ2().real() << std::endl;

	q.printReal();                              // print quark on the real axis -> quark_dressing.txt
	q.printShells();                            // print shell quark in the complex plane -> shell_quark.txt

	const std::complex<double> I = {0., 1.};

	std::cout << "as an example:" << std::endl;
	std::cout << "B(1 GeV + i * 1 GeV) = " << q.interpolateShell("B", 1. + I) << std::endl;

	return 0;
}
