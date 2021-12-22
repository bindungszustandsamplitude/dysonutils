generic:
	g++ -std=c++17 -O3 -fopenmp -Wall -Wshadow -c Twoquark.cpp -o Twoquark-generic.o

broadwell:
	g++ -std=c++17 -O3 -fopenmp -Wall -Wshadow -march=broadwell -c Twoquark.cpp -o Twoquark-broadwell.o

sandybridge:
	g++ -std=c++17 -O3 -fopenmp -Wall -Wshadow -march=sandybridge -c Twoquark.cpp -o Twoquark-sandybridge.o

skylake:
	g++ -std=c++17 -O3 -I ~/Nicloud/nico_research/programs/routines -fopenmp -Wall -Wshadow -march=sandybridge -c Twoquark.cpp -o Twoquark-skylake-mac.o
