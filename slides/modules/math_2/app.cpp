// not module unit, since no module declaration
#include <iostream>
import zeus.math;
int main() {
	std::cout << zeus::math::square(2.0) << ' ' << zeus::math::sinc(0.0)
	  << ' ' << zeus::math::get_answer() << '\n';
}
