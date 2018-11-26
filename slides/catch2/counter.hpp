#include <stdexcept>
#include <numeric>

class counter {
public:
	using count_type = std::size_t;
	static constexpr count_type max_count() {
		return std::numeric_limits<count_type>::max();
	}
	counter(count_type count = 0) : count_(count) {}
	count_type get_count() const {
		return count_;
	}
	void increment() {
		if (count_ == max_count()) {
			throw std::overflow_error("counter overflow");
		}
		++count_;
	}
private:
	count_type count_;
};
