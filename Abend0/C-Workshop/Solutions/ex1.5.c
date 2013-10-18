#include <stdio.h>

int main(void)
{
	for (int i = 2; i <= 10; i++) {
		int result = 1;
		for (int j = 0; j < 5; j++)
			result *= i;
		printf("%i^5 = %i\n", i, result);
	}

	return 0;
}
