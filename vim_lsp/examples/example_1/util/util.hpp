#ifndef util_hpp
#define util_hpp

class Counter {
public:
	using value_type = int;
	Counter(value_type value = 0) : value_(value) {}
	Counter& operator++() {
		++value_;
		return *this;
	}
	value_type value() const {
		return value_;
	}
private:
	value_type value_;
};

int get_answer();

#endif
