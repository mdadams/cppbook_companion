#ifndef RA_BQUEUE_HPP
#define RA_BQUEUE_HPP

#include <cstddef>
#include <queue>
#include <stdexcept>
#include <utility>
#include <vector>

namespace ra::containers {

/*
A simple bounded queue container.
*/
template <class T>
class bqueue
{
public:
	using value_type = T;
	bqueue(std::size_t max_size);
	std::size_t size() const;
	std::size_t max_size() const;
	bool empty() const;
	void push(const T& item);
	void push(T&& item);
	void pop(T& item);
private:
	std::queue<T> q_;
	std::size_t max_size_;
};

template <class T>
bqueue<T>::bqueue(std::size_t max_size) : max_size_(max_size)
{
}

template <class T>
inline std::size_t bqueue<T>::size() const
{
	return q_.size();
}

template <class T>
inline std::size_t bqueue<T>::max_size() const
{
	return max_size_;
}

template <class T>
inline bool bqueue<T>::empty() const
{
	return q_.empty();
}

template <class T>
void bqueue<T>::push(const T& item)
{
	if (q_.size() >= max_size_) {
		throw std::runtime_error("queue is full");
	}
	q_.push(item);
}

template <class T>
void bqueue<T>::push(T&& item)
{
	if (q_.size() >= max_size_) {
		throw std::runtime_error("queue is full");
	}
	q_.push(std::move(item));
}

template <class T>
void bqueue<T>::pop(T& item)
{
	if (q_.size() == 0) {
		throw std::runtime_error("queue is empty");
	}
	item = q_.front();
	q_.pop();
}

template <class T>
void pop_into_vector(bqueue<T>& q, std::vector<T>& v)
{
	typename bqueue<T>::value_type item;
	while (!q.empty()) {
		q.pop(item);
		v.push_back(std::move(item));
	}
}

}

#endif
