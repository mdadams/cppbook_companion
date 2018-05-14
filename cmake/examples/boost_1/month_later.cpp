#include <boost/date_time/gregorian/gregorian.hpp>
#include <boost/date_time/gregorian/gregorian.hpp>
#include <iostream>

namespace bg = boost::gregorian;

int main()
{
	bg::date d = bg::day_clock::local_day(),
	prev = d - bg::months(1),
	next = d + bg::months(1);
	std::cout
	  << "Today is "
	  << bg::to_simple_string(d) << ".\n"
	  << "One month before today was "
	  << bg::to_simple_string(prev) << ".\n"
	  << "One month from today will be "
	  << bg::to_simple_string(next) << ".\n";
}
