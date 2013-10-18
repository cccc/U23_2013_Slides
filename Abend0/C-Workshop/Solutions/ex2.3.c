#include <stdio.h>
#include <stdlib.h>

double tri_area(double g, double h)
{
	return 0.5 * g * h;
}

int main(int argc, char *argv[])
{
	if (argc != 3) {
		printf("Usage: %s <g> <h>\n", argv[0]);
		return 1;
	}

	double g = strtod(argv[1], NULL);
	double h = strtod(argv[2], NULL);

	printf("area is %f\n", tri_area(g, h));

	return 0;
}
