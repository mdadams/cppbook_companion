#include <iostream>
#include "util.hpp"

int main() {
	int x = 21;
	x *= 2;
	std::cout << x << '\n';
	{
		int x = get_answer();
		++--x;
		std::cout << x << '\n';
	}
	return !std::cout;
}
