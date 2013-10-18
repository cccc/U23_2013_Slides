#include <stdio.h>

int main(void)
{
	for (int i = 2; i < 100; i++) {
		_Bool prime = 1;
		// technically the necessary upper limit is only the
		// square root of i here, but i/2 is good enough for us
		for (int j = 2; j <= i/2; j++) {
			if (i % j == 0) {
				prime = 0;
			}
		}
		if (prime) {
			printf("%i\n", i);
		}
	}

	return 0;
}
