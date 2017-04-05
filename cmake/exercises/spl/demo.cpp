#include <SPL/bitStream.hpp>

int main()
{
	SPL::OutputBitStream obs(std::cout);
	std::string s("Hello, World!\n");
	for (auto c : s) {
		obs.putBits(c, 8);
	}
}
