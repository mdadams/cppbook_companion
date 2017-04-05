// A bad way to compute Fibonacci numbers.
// Can you say "stack overflow"? ;)
long fibonacci(long i)
{
	if (i == 0 || i == 1) {
		return 1;
	} else {
		return fibonacci(i - 1) + fibonacci(i - 2);
	}
}
