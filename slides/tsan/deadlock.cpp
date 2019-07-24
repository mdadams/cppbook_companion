#include <iostream>
#include <thread>
#include <mutex>
std::mutex m0;
std::mutex m1;
void func1(int n) {
	for (auto i = n; i > 0; --i) {
		std::scoped_lock<std::mutex> l0(m0);
		std::scoped_lock<std::mutex> l1(m1);
		std::cout << "a\n";
	}
}
void func2(int n) {
	for (auto i = n; i > 0; --i) {
		std::scoped_lock<std::mutex> l1(m1);
		std::scoped_lock<std::mutex> l0(m0);
		std::cout << "b\n";
	}
}
int main() {
	std::thread t1([]{func1(1);});
	std::thread t2([]{func2(1);});
	t1.join(); t2.join();
}
