#include <thread>
int x = 0;
int main() {
	std::thread t([&]{x = 42;});
	x = 43;
	t.join();
}
