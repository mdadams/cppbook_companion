#include <algorithm>
#include <forward_list>
#include <functional>

template <class ForwardIterator, class Compare>
void bubble_sort(ForwardIterator first, ForwardIterator last, Compare less) {
	for (auto sorted = first; first != last; last = sorted) {
		sorted = first;
		for (auto cur = first, prev = first; ++cur != last; ++prev) {
			if (less(*cur, *prev)) {
				std::iter_swap(cur, prev);
				sorted = cur;
			}
		}
	}
}
