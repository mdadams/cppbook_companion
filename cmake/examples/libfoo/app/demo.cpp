#include <iostream>
#include <foo/other.hpp>
#include <foo/widget.hpp>
#include <foo/gadget.hpp>

int main()
{
	foo::Widget w;
	foo::Gadget g;
	std::cout << w << '\n';
	std::cout << g << '\n';
	return std::cout ? 0 : 1;
}
