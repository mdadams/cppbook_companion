#include <cstdlib>
#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

void worker(std::vector<int>& v1, std::mutex& m1, std::vector<int>& v2,
  std::mutex& m2)
{
	for (auto i = 1'000'000; i; --i) {
		std::scoped_lock l1(m1);
		std::scoped_lock l2(m2);
		std::swap(v1, v2);
	}
}

int main(int argc, char** argv)
{
	std::vector va{0, 2, 4, 6};
	std::mutex ma;
	std::vector vb{1, 3, 5, 7};
	std::mutex mb;

	std::vector<std::thread> threads;
	threads.emplace_back(worker,
	  std::reference_wrapper<std::vector<int>>(va),
	  std::reference_wrapper<std::mutex>(ma),
	  std::reference_wrapper<std::vector<int>>(vb),
	  std::reference_wrapper<std::mutex>(mb)
	);
	threads.emplace_back(worker,
	  std::reference_wrapper<std::vector<int>>(vb),
	  std::reference_wrapper<std::mutex>(mb),
	  std::reference_wrapper<std::vector<int>>(va),
	  std::reference_wrapper<std::mutex>(ma)
	);

	for (auto&& t : threads) {
		t.join();
	}
}
