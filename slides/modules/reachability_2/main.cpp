#include <cassert>
import zeus;

int main() {
	// zeus::int_point q; // ERROR: int_point not visible
	auto p = zeus::origin();
	assert(p.x == 0 && p.y == 0);
	using point = decltype(p);
	point q;
}
