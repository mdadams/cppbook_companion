#include <iostream>
#include <limits>

int i_feel_so_dirty()
{
	int i;
	std::cout << i << '\n';
	i = -16;
	std::cout << (i << 1) << '\n';
	std::cout << (i >> 1) << '\n';
	std::cout << (i << 128) << '\n';
	i = std::numeric_limits<int>::max();
	++i;
	std::cout << i << '\n';
}

int main()
{
	i_feel_so_dirty();
}
