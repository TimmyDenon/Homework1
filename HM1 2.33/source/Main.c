#include<stdio.h>
#include<stdlib.h>

float a, b, c, d, e;
int main()
{
	printf("�п�J�@��Ѫ��`���{��");
	scanf_s("%f", &a);
	printf("�T�o�@����/�[�ڦh�ֿ�");
	scanf_s("%f", &b);
	printf("�����@����/�[�گ��p�h�֤���");
	scanf_s("%f", &c);
	printf("�@�Ѫ������O");
	scanf_s("%f", &d);
	printf("�@�Ѫ��q��O (�L���O)");
	scanf_s("%f", &e);
	printf("�ϥΪ̤@�ѤU�Ӷ}���h�u�@����O��%f", (e + d + ((a / c)*b)));
}