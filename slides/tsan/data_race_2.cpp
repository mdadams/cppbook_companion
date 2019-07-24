#include <iostream>
#include <thread>

unsigned long long counter = 0;

void func() {
	for (unsigned long long i = 0; i < 10'000'000; ++i) {
		++counter;
	}
}

int main() {
	std::thread t1(func);
	std::thread t2(func);
	t1.join();
	t2.join();
	std::cout << counter << '\n';
}
