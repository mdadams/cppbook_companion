#define CATCH_CONFIG_MAIN
#include <catch/catch.hpp>
#include "counter.hpp"

TEST_CASE("constructor", "[counter]") {
	counter x;
	CHECK(x.get_count() == 0);
	counter y(1);
	CHECK(y.get_count() == 1);
}

TEST_CASE("maximum count", "[counter]") {
	CHECK(counter::max_count() == std::numeric_limits<
	  counter::count_type>::max());
}

TEST_CASE("increment (no overflow)", "[counter]") {
	counter x(0);
	REQUIRE(x.get_count() == 0);
	x.increment();
	CHECK(x.get_count() == 1);
}

TEST_CASE("increment (overflow)", "[counter]") {
	counter x(counter::max_count());
	CHECK_THROWS_AS(x.increment(), std::overflow_error);
}
