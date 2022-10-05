#include<stdio.h>
#include<stdlib.h>


int main()
{
	float x,y,z;
	printf("請輸入你的體重(kg)");
	scanf_s("%f", &x);
	printf("請輸入你的身高(cm)");
	scanf_s("%f", &y);
	y /= 100;
	z = x / y / y;
	printf("你的BMI為%f\n\n",z);
	if (z >= 30)
		printf("Obese");
	else if(z<18.5)
		printf("Underweight");
	else if (z >= 18.5 && z< 24.9)
		printf("Normal");
	else if (z >= 25 && z < 29.9)
		printf("Overweight");
}