#include <cstddef>
#include <vector>

// Note: T is not allowed to be bool.
template <class T>
class Stack {
public:
	bool empty() const {return s_.empty();}
	std::size_t size() const {return s_.size();}
	const T& top() const {return s_.back();}
	void push(const T& x) {s_.push_back(x);}
	void pop() {s_.pop_back();}
private:
	std::vector<T> s_;
};
