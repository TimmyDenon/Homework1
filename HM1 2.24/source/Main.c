#include<stdio.h>
#include<stdlib.h>

int x, y;
int main()
{
	scanf_s("%d",&x);
	(x % 2 == 0) ? printf("even") : printf("odd");
}
