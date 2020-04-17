#include <cstdlib>
#include <iostream>

int factorial(int n)
{
	int result = 1;
	while (n > 1) {
		result *= n;
		--n;
	}
	return result;
}

int main(int argc, char** argv)
{
	int n = 13;
	if (argc >= 2) {
		n = std::atoi(argv[1]);
	}
	std::cerr << "computing " << n << "!\n";
	std::cout << factorial(n) << '\n';
	return (std::cout) ? 0 : 1;
}
