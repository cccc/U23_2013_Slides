#include <stdio.h>
#include <math.h>

double dist(double x1, double y1, double z1, double x2, double y2, double z2)
{
	return sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1) + (z2-z1) * (z2-z1));
}

int main(void)
{
	printf("Distance: %f\n", dist(1, 1, 1, 4, 1, 5));

	return 0;
}
