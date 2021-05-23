#include <iostream>
#include <foo/gadget.hpp>

namespace foo {

Gadget::Gadget()
{
}

std::ostream& Gadget::output(std::ostream& out) const
{
	out << "Gadget";
	return out;
}

std::ostream& operator<<(std::ostream& out, const Gadget& g)
{
	return g.output(out);
}

}
