#include <catch2/catch_all.hpp>
#include <deque>
#include <stdexcept>

class TestFixture {
public:
	TestFixture() : q0(), q1{1, 2, 3} {
	}
protected:
	std::deque<int> q0;
	std::deque<int> q1;
};

TEST_CASE_METHOD(TestFixture, "Check deque at", "[deque]") {
	CHECK_THROWS_AS(q0.at(0), std::out_of_range);
	CHECK(q1.at(0) == 1);
	CHECK_THROWS_AS(q1.at(3), std::out_of_range);
}

TEST_CASE_METHOD(TestFixture, "Check deque clear", "[deque]") {
	q0.clear();
	CHECK(q0.size() == 0);
	q1.clear();
	CHECK(q1.size() == 0);
}
