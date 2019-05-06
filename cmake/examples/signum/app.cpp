#include <cstdlib>
#include <iostream>
#include "utility.hpp"

int main(int argc, char** argv)
{
	if (argc < 2) {
		return 1;
	}
	double x = std::atof(argv[1]);
	std::cout << signum(x) << '\n';
	return std::cout ? 0 : 1;
}
