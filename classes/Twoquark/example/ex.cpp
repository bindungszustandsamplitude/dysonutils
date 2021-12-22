#include <iostream>
#include "../src/include/Twoquark.hpp"

int main(void) {

	dysonUtils::Twoquark pion;
	pion.init("m", "p", 0.0038, 0.0038);      // set identity ("m"eson, "p"seudoscalar) and quark masses
	                                          // and initialize the state thereby
	std::cout << pion.getEigenvalue( -0.140*0.140 ) << std::endl;  // print eigenvalue at P² = -0.14² GeV²

	pion.getMass( 0.140, true );              // calculate mass directly, set flag true for verbosity in stdout
	std::cout << pion.mass() << std::endl;              // access calculated mass

	pion.normalize();                         // normalize amplitude

	pion.printAmplitude();                    // print amplitude to file "bsa.txt"

	return 0;
}
