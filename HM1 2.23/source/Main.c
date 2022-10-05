#include<stdio.h>
#include<stdlib.h>

int x, y, z;

int main()
{
	int integer[] = { x,y,z };
	scanf_s("%d %d %d", &x, &y, &z);
	for(int i=0 ;i< 2 ;i++)
	{
		if (integer[i] > integer[i + 1])
			integer[i + 1] = integer[i];
		for (int j = 0; j < 1; j++)
		{
			if (integer[i] > integer[i + 1])
				integer[i + 1] = integer[i];
		}
	}
	printf("%d %d", x, z);
}
