#include <stdio.h>

int main(void)
{
	for (int i = 0; i <= 10; i++) {
		int res = 1;
		for (int j = i; j > 0; j--) {
			res *= j;
		}
		printf("fac(%i) = %i\n", i, res);
	}

	return 0;
}
