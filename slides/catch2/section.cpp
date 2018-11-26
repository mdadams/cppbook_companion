#define CATCH_CONFIG_MAIN
#include <catch/catch.hpp>

TEST_CASE("Check resize", "[vector]") {
	constexpr std::size_t size = 128;
	std::vector<int> x(size);
	REQUIRE(x.size() == size);
	REQUIRE(x.capacity() >= size);
	SECTION("Increase size") {
		std::size_t n = size * 16;
		x.resize(n);
		CHECK(x.size() == n);
		CHECK(x.capacity() >= n);
	}
	SECTION("Decrease size") {
		std::size_t n = size / 16;
		x.resize(n);
		CHECK(x.size() == n);
		CHECK(x.capacity() >= n);
	}
	SECTION("Zero size") {
		x.resize(0);
		CHECK(x.size() == 0);
		CHECK(x.capacity() >= size);
	}
}
