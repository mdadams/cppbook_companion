module; // start of global module fragment
#include <cmath>
export module zeus.math; // start of module unit purview

namespace zeus::math {
	double answer = 42;
	export double sinc(double x)
	  {return (x != 0) ? sin(x) / x : 1.0;}
	export double get_answer() {return answer;}
	export template <class T> T square(const T& x)
	  {return x * x;}
}
