#ifndef FIBONACCI_HPP
#define FIBONACCI_HPP

#include <cstdint>

constexpr uint64_t fibonacci(uint64_t n) {
	if (n >= 2) {return fibonacci(n - 1) + fibonacci(n - 2);}
	else if (n == 1) {return 1;}
	else {return 0;}
}

#endif
