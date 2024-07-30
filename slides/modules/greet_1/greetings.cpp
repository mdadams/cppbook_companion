module;
#include <string>
export module greetings;

namespace greetings {
	export std::string get_greeting() {
		return "Hello, World!";
	}
}
