module;
#include <string>
export module greetings:english;
export namespace greetings {
	std::string get_greeting_en() {
		return "Hello, World!";
	}
}
