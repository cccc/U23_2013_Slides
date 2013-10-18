#include <stdio.h>

int main(void)
{
	int count = 0, c;

	while ((c = getchar()) != EOF)
		count += (c == '1');

	printf("There were %i '1's in the input\n", count);

	return 0;
}
