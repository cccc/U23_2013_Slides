#include <stdio.h>

void exchange(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
	int x = 3, y = 4;
	printf("x: %i, y: %i\n", x, y);
	exchange(&x, &y);
	printf("x: %i, y: %i\n", x, y);

	return 0;
}
