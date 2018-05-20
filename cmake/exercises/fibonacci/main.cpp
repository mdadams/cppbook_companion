#include <iostream>
#include "fibonacci.hpp"

int main()
{
	int i;
	while (std::cin >> i) {
		std::cout << fibonacci(i) << '\n';
	}
	return 0;
}
