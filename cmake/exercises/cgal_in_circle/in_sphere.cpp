#include <CGAL/Cartesian.h>
#include <CGAL/Filtered_kernel.h>
#include <iostream>
#include "utility.hpp"

int main()
{
	using Kernel = CGAL::Filtered_kernel<CGAL::Cartesian<double>>;
	Kernel::Point_3 a;
	Kernel::Point_3 b;
	Kernel::Point_3 c;
	Kernel::Point_3 d;
	Kernel::Point_3 q;
	Kernel::Side_of_oriented_sphere_3 side_of_oriented_sphere;
	while (std::cin >> a >> b >> c >> d >> q) {
		std::cout << to_string(side_of_oriented_sphere(a, b, c, d, q)) << '\n';
	}
	return 0;
}
