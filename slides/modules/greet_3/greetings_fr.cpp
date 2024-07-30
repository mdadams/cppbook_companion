module;
#include <string>
export module greetings:french;
export namespace greetings {
	std::string get_greeting_fr() {
		return "Bonjour, Tout Le Monde!";
	}
}
