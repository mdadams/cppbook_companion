#include <catch2/catch_all.hpp>
#include <string>
#include <vector>
#include "bqueue.hpp"

TEMPLATE_TEST_CASE("Check constructor", "[constructors]",
  int, double) {
	using Queue = ra::containers::bqueue<TestType>;
	constexpr std::size_t max_size = 1024;
	Queue s(max_size);
	CHECK(s.empty());
	CHECK(s.size() == 0);
	CHECK(s.max_size() == max_size);
}

TEMPLATE_TEST_CASE("Check push and pop", "[modifiers]",
  int, double) {
	using Queue = ra::containers::bqueue<TestType>;
	Queue s(1024);
	TestType pushed_item(0);
	s.push(pushed_item);
	CHECK(s.size() == 1);
	TestType item;
	s.pop(item);
	CHECK(item == pushed_item);
	CHECK(s.size() == 0);
	CHECK(s.empty());
}

TEMPLATE_TEST_CASE("Check pop_into_vector", "[modifiers]",
  int) {
	using Queue = ra::containers::bqueue<TestType>;
	Queue q(1024);
	for (auto&& i : {1, 2, 3}) {
		q.push(i);
	}
	std::vector<int> v;
	pop_into_vector(q, v);
	CHECK(v == std::vector<int>{1, 2, 3});
}
