#include<stdio.h>
#include<stdlib.h>

int x;
int main()
{
	printf("number\tsquare\tcube\n");
	for(int i=0 ;i<11;i++)
	{
		printf("%d\t%d\t %d\n", x,x*x,x*x*x);
		x++;
	}

}