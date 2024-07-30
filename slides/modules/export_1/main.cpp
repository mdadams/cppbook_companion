#include <iostream>
import hg2g;
int main() try {
	std::cout << hg2g::get_answer() << ' ' << hg2g::marvin << '\n';
	// auto x = hg2g::x[0]; // ERROR: x not visible
	if (!std::cout.flush()) {hg2g::panic();}
} catch (...) {std::cerr << "Don't panic!\n";}
