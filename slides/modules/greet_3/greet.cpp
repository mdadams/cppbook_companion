#include <iostream>
import greetings;

int main() {
    std::cout << greetings::get_greeting_en() << '\n';
    std::cout << greetings::get_greeting_fr() << '\n';
	return !std::cout.flush();
}
