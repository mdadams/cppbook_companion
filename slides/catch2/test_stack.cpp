#include <catch2/catch_all.hpp>
#include <complex>
#include "stack.hpp"

TEMPLATE_TEST_CASE("Check default constructor", "[stack][constructor]",
  int, double, std::complex<double>) {
	Stack<TestType> s;
	CHECK(s.empty());
	CHECK(s.size() == 0);
}

TEMPLATE_TEST_CASE("Check push and pop", "[stack][modifier]",
  int, double, std::complex<double>) {
	std::size_t size = 0;
	Stack<TestType> s;
	REQUIRE(s.size() == size);
	while (size < 3) {
		++size; s.push(TestType(size));
		REQUIRE(s.size() == size);
		REQUIRE(s.top() == TestType(size));
	}
	while (size > 0) {
		s.pop(); --size;
		REQUIRE(s.size() == size);
	}
}
