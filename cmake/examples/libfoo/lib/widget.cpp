#include <iostream>
#include <foo/widget.hpp>

namespace foo {

Widget::Widget()
{
}

std::ostream& Widget::output(std::ostream& out) const
{
	out << "Widget";
	return out;
}

std::ostream& operator<<(std::ostream& out, const Widget& w)
{
	return w.output(out);
}

}
