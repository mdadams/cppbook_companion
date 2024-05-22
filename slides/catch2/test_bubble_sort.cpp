#include <catch2/catch_all.hpp>

#include <forward_list>
#include <functional>
#include "bubble_sort.hpp"

/*
This needs to be completed.
*/
TEMPLATE_TEST_CASE("test", "[blah]", int, double, short) {
	std::forward_list<TestType> values{7, 0, 6, 1, 5, 2, 4, 3};
	bubble_sort(values.begin(), values.end(), std::less<TestType>());
	CHECK((values == std::forward_list<TestType>{0, 1, 2, 3, 4, 5, 6, 7}));
	bubble_sort(values.begin(), values.end(), std::greater<TestType>());
	CHECK((values == std::forward_list<TestType>{7, 6, 5, 4, 3, 2, 1, 0}));
}
