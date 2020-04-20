#include <cassert>
#include <iostream>

int main()
{
	std::cout << "About to execute assert(false).\n";

	assert(false);

	// If assertions are enabled, this line of code should never be reached.
	std::cout << "Assertions are disabled.\n";

	return std::cout ? 0 : 1;
}
