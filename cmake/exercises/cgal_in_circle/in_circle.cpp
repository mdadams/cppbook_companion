#include <CGAL/Cartesian.h>
#include <CGAL/Filtered_kernel.h>
#include <iostream>
#include "utility.hpp"

int main()
{
	using Kernel = CGAL::Filtered_kernel<CGAL::Cartesian<double>>;
	Kernel::Point_2 a;
	Kernel::Point_2 b;
	Kernel::Point_2 c;
	Kernel::Point_2 q;
	Kernel::Side_of_oriented_circle_2 side_of_oriented_circle;
	while (std::cin >> a >> b >> c >> q) {
		std::cout << to_string(side_of_oriented_circle(a, b, c, q)) << '\n';
	}
	return 0;
}
