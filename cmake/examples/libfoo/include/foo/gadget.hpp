#ifndef foo_gadget_hpp
#define foo_gadget_hpp

#include <iostream>

namespace foo {

class Gadget
{
public:
	Gadget();
	std::ostream& output(std::ostream& out) const;
};

std::ostream& operator<<(std::ostream& out, const Gadget& g);

}

#endif
