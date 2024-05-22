#include <cmath>
#include <catch2/catch_all.hpp>

TEST_CASE("check addition") {
	float x = 0.0f;
	for (int i = 0; i < 10; ++i) {x += 0.1f;}
	CHECK_NOFAIL(x == 1.0f);
	  // condition may be false due to roundoff error
	CHECK_THAT(x, Catch::Matchers::WithinAbs(1.0f, 0.01f));
	  // should pass (absolute tolerance 0.01)
	CHECK_THAT(x, Catch::Matchers::WithinRel(1.0f, 0.01f));
	  // should pass (relative tolerance 1%)
	float y = std::nextafter(0.0f, 1.0f);
	CHECK_THAT(y, Catch::Matchers::WithinULP(0.0f, 1));
	  // should pass (y is next representable value greater than 0.0f)
}
