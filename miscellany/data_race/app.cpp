#include <cstdlib>
#include <iostream>
#include <thread>
#include <vector>

constexpr auto num_iterations = 1'000'000;

void worker(volatile unsigned long long& count)
{
	for (auto i = num_iterations; i; --i) {
		++count;
	}
}

int main(int argc, char** argv)
{
	int num_threads = 4;
	if (argc >= 2) {
		num_threads = std::atoi(argv[1]);
	}
	unsigned long long count = 0;
	std::vector<std::thread> threads;
	for (int i = 0; i < num_threads; ++i) {
		threads.emplace_back(worker,
		  std::reference_wrapper<unsigned long long>(count));
	}
	for (auto&& t : threads) {
		t.join();
	}
	std::cout << count << '\n';
}
