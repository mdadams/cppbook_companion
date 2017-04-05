#include <iostream>

// This function swaps the values of "x" and "y".
void swap(int x, int y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

int main(int argc, char** argv)
{
	int first = 10;
	int second = 20;

	std::cout << "The numbers before swapping are:\n"
	  << first << ", " << second << "\n";

	swap(first, second);

	std::cout << "The numbers after swapping are:\n"
	  << first << ", " << second << "\n";

	return 0;
}
