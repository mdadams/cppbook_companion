#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v{1, 2, 3};
	auto two = std::find(v.begin(), v.end(), 2);
	for (int i = 0; i < 4096; ++i) {
		v.push_back(i);
	}
	std::cout << *two << '\n';
}
