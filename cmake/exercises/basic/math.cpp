#include <cmath>

double sinc(double x)
{
	return (x == 0.0) ? 1.0 : (sin(x) / x);
}

double unit_step(double x)
{
	if (x > 0.0) {
		return 1.0;
	} else if (x == 0.0) {
		return 0.5;
	} else {
		return 0.0;
	}
}
