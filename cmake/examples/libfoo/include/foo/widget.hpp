#ifndef foo_widget_hpp
#define foo_widget_hpp

#include <iostream>

namespace foo {

class Widget
{
public:
	Widget();
	std::ostream& output(std::ostream& out) const;
};

std::ostream& operator<<(std::ostream& out, const Widget& w);

}

#endif
