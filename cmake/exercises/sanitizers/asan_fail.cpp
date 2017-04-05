#include <iostream>

void i_feel_so_dirty()
{
	int a[4];
	std::cout << a[5] << '\n';
	int* p = nullptr;
	std::cout << (*p) << '\n';
}

int main()
{
	i_feel_so_dirty();
}
