#include <boost/timer/timer.hpp>
#include <iostream>
#include "fibonacci.hpp"

int main()
{
	boost::timer::auto_cpu_timer t;
	for (long i = 0; i < 32; ++i) {
		std::cout << fibonacci(i) << '\n';
	}
	return 0;
}
