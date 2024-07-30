module;
#include <string>
export module hg2g;
namespace hg2g {
	export using c42_t = char[42];
	c42_t x;
	export struct depressed_tag {};
	export template<class T> T constexpr forty_two{sizeof(x)};
	export {
		std::string marvin{"paranoid"};
		void panic() {throw 42;}
	}
}
export namespace hg2g {
	int get_answer() {return sizeof(x);}
}
export namespace h2g2 = hg2g;
