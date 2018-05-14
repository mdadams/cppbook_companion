#include <iostream>
#include <chrono>
#include <cmath>
#include <boost/chrono.hpp>

double get_result()
{
	double sum = 0.0;
	for (long i = 0L; i < 1000000L; ++i) {
		sum += std::sin(i) * std::cos(i);
	}
	return sum;
}

namespace bc = boost::chrono;

int main() {
	// Get the start time.
	auto start_time = bc::high_resolution_clock::now();
	// Do some computation.
	double result = get_result();
	// Get the end time.
	auto end_time = bc::high_resolution_clock::now();
	// Compute elapsed time in seconds.
	double elapsed_time = bc::duration<double>(end_time - start_time).count();
	// Print result and elapsed time.
	std::cout << "result " << result << '\n';
	std::cout << "time (in seconds) " << elapsed_time << '\n';
}
