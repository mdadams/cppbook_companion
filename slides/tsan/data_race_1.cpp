#include <iostream>
#include <thread>
int x = 0;
void func() {x = 42;}
int main() {
	std::thread t(func);
	std::cout << "Hello\n";
	x = 43;
	t.join();
}
