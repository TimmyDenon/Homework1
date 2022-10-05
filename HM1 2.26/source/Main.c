#include<stdio.h>
#include<stdlib.h>

int x, y;
int main()
{
	scanf_s("%d %d", &x, &y);
	(x%y == 0) ? printf("the first number is a multiple of the second number") : printf("the first number is not a multiple of the second number");

}