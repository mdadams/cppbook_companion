#include <CGAL/Cartesian.h>

std::string to_string(CGAL::Oriented_side orient)
{
	switch (orient) {
	case CGAL::ON_NEGATIVE_SIDE:
		return "on negative side";
		break;
	case CGAL::ON_POSITIVE_SIDE:
		return "on positive side";
		break;
	case CGAL::ON_ORIENTED_BOUNDARY:
		return "on oriented boundary";
		break;
	}
}
