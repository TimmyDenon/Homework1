#include<stdio.h>
#include<stdlib.h>

int x, y, z,t;

int main()
{
	scanf_s("%d %d %d", &x, &y, &z);
	if (x > y && x > z)
		printf("largest is %d\n\n", x);
	if (y > x && y > z)
		printf("largest is %d\n\n", y);
	if (z > y && z > x)
		printf("largest is %d\n\n", z);

	if (x < y && x < z)
		printf("smallest is %d\n", x);
	if (y < x && y < z)
		printf("smallest is %d\n", y);
	if (z < y && z < x)
		printf("smallest is %d\n", z);
}
