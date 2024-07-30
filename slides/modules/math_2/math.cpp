module; // start of global module fragment
#include <cmath>
// declare module implementation unit
module zeus.math; // start of module unit purview
namespace zeus::math {
	double sinc(double x) {return (x != 0) ? sin(x) / x : 1.0;}
	double get_answer() {return answer;}
}
