#include <iostream>
#include "hg2g/hg2g.hpp"

int main()
try {
	std::cout << "The answer to the ultimate question of "
	  "life, the universe, and everything is:\n" << hg2g::get_answer() << '\n';

	std::cout << "The ultimate question is:\n" << hg2g::get_question() << '\n';
	return 0;
} catch(...) {
	std::cerr << "Exception caught.\n";
	std::cerr << "Program terminating.\n";
}
