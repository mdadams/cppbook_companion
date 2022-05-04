#include <iostream>
#include "util.hpp"

int main() {
	Counter c(41);
	++c;
	std::cout << c.value() << '\n';
	{
		Counter c(40);
		++++c;
		std::cout << c.value() << '\n';
	}
	int x = get_answer();
	std::cout << x << '\n';
	return !std::cout;
}
