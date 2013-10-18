#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char input[16];
	int count = 0;

	fgets(input, sizeof(input), stdin);
	int a = atoi(input);

	int tmp = a;
	while (tmp != 0) {
		count += tmp & 1;
		tmp >>= 1;
	}

	printf("The number %i has %i 1 Bits\n", a, count);

	return 0;
}
