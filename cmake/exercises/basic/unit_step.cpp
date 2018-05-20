#include <iostream>
#include "math.hpp"

int main(int argc, char** argv)
{
	double x;
	while (std::cin >> x) {
		std::cout << unit_step(x) << '\n';
	}
	return 0;
}
