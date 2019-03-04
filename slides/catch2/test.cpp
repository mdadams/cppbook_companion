#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

TEST_CASE("addition") {
	float x = 0.0f;
	for (int i = 0; i < 10; ++i) {x += 0.1f;}
	CHECK_NOFAIL(x == 1.0f);
	  // condition may be false due to roundoff error
	CHECK(x == Approx(1.0f));
	  // should pass
	CHECK(x == Approx(1.0f).margin(0.01f));
	  // should pass (absolute tolerance 0.01)
	CHECK(x == Approx(1.0f).epsilon(0.01f));
	  // should pass (relative tolerance 1%)
}
