int fibonacci(int n)
{
	if (n == 0) {
		return 0;
	} else {
		int previous = 0;
		int current = 1;
		int next = 1;
		for (int i = 1; i < n; ++i) {
			next = current + previous;
			previous = current;
			current = next;
		}
		return next;
	}
}
