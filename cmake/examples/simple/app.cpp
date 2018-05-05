#include <iostream>
#include "util.hpp"

int main()
{
	double x;
	while (std::cin >> x) {
		auto y = square(x);
		std::cout << y << '\n';
	}
	return 0;
}
