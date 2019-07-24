#include <thread>
#include <iostream>

unsigned long count = 0;

void func() {
	for (unsigned long i = 0; i < 1'000'000; ++i) {
		++count;
	}
}

int main() {
	std::thread t1(func);
	std::thread t2(func);
	t1.join();
	t2.join();
	std::cout << count << '\n';
}
