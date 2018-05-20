#include <iostream>
#include <limits>

int main()
{
	int values[] = {1, 2, 3, 4, std::numeric_limits<int>::max()};
	int sum = 0;
	for (int i = 0; i < 6; ++i) {
		sum += values[i];
	}
	std::cout << sum << '\n';
	return 0;
}
