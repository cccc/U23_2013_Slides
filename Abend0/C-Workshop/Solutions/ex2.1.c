#include <stdio.h>

unsigned int fac(unsigned int num)
{
	if (num == 0)
		return 1;
	else
		return num * fac(num-1);
}

int main(void)
{
	for (int i = 0; i <= 10; i++)
		printf("%i! = %i\n", i, fac(i));

	return 0;
}
