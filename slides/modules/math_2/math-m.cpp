// no global module fragment
// declare module interface unit
export module zeus.math; // start of module unit purview
namespace zeus::math {
	export double sinc(double);
	// note: must export template definition, not just declaration
	export template <class T> T square(const T& x) {return x * x;}
	export double get_answer();
	double answer = 42;
}
