#include "hg2g/hg2g.hpp"
#include <stdexcept>

namespace hg2g {

std::string get_question()
{
	throw std::runtime_error("answer cannot be computed");
}

}
