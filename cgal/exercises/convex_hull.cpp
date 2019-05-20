#include <iostream>
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/Triangulation_2.h>

int main(int argc, char** argv)
{
	using Kernel = CGAL::Exact_predicates_inexact_constructions_kernel;
	using Triangulation = CGAL::Triangulation_2<Kernel>;
	using Vertex_circulator = Triangulation::Vertex_circulator;
	using Point = Triangulation::Point;

	Triangulation tri;

	// Read points from standard input and insert them into the triangulation.
	Point point;
	while (std::cin >> point) {
		tri.insert(point);
	}

	// Loop over all of the vertices incident to the infinite vertex.
	// These are the vertices on the convex hull.
	std::cout << "Vertices on convex hull:\n";
	Vertex_circulator vertexCircStart =
	  tri.incident_vertices(tri.infinite_vertex());
	if (vertexCircStart != 0) {
		Vertex_circulator vertexCirc = vertexCircStart;
		do {
			std::cout << vertexCirc->point() << "\n";
			++vertexCirc;
		} while (vertexCirc != vertexCircStart);
	}

	return 0;
}
