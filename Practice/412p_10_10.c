//412p_10_10.c
#include<stdio.h>

void func(int* pdata, int count);

int main()
{
	int data[10] = { 56, 75, 450, 7, 340, 44, 120, 5, 20, 30 };
	int count = sizeof(data) / sizeof(int);
	func(data, count);



	return 0;
}

void func(int* pdata, int count)
{
	int i,sum=0;

	for (i = 0; i < count; i++)
		sum += *(pdata + i);
	printf("배열의 합 : %d, 평균 : %d", sum, sum / count);
}
