#include <stdio.h>

unsigned int fib(unsigned int i)
{
	switch (i) {
	case 0:
	case 1:
		return i;
	default:
		return fib(i-1) + fib(i-2);
	}
}

int main(void)
{
	for (int i = 0; i < 10; i++)
		printf("fib_%u = %u\n", i, fib(i));

	return 0;
}
