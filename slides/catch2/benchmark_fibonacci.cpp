#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include "fibonacci.hpp"

// Note: [!benchmark] is special tag indicating test case is benchmark
TEST_CASE("benchmark fibonacci", "[!benchmark]") {
	REQUIRE(fibonacci(20) == 6'765);
	BENCHMARK("fibonacci(20)") {
		return fibonacci(20);
	};
}
