#include<stdio.h>
#include<stdlib.h>

float a, b, c, d, e;
int main()
{
	printf("請輸入一整天的總里程數");
	scanf_s("%f", &a);
	printf("汽油一公升/加侖多少錢");
	scanf_s("%f", &b);
	printf("平均一公升/加侖能行駛多少公里");
	scanf_s("%f", &c);
	printf("一天的停車費");
	scanf_s("%f", &d);
	printf("一天的通行費 (過路費)");
	scanf_s("%f", &e);
	printf("使用者一天下來開車去工作的花費為%f", (e + d + ((a / c)*b)));
}