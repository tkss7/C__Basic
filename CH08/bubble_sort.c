//bubble_sort.c
#include <stdio.h>
/*
프로그램언어 마다 정렬 라이브러리를 제공해 준다.
*/
int main()
{
	int num[5] = { 64,9,67,120,1 },tmp;
	int i, j;//제어변수

	for (i = 0; i < 5; i++)
		printf("%d, ", num[i]);
	printf("\n=========================\n");

	//bubble sort, sorting의 개념
	for (i = 0; i < 4; i++)
	{
		//for (j = 0; j < 4 - i; j++)//오름차순
		for (j = 0; j < 4 - i; j++) // 내림차순
		{
			if (num[j] > num[j + 1])
			{
				tmp = num[j];
				num[j] = num[j+1];
				num[j + 1] = tmp;
			}
		}
	}
	printf("Sort Result. \n");
	for (i = 0; i < 5; i++)
		printf("%d, ",num[i]);
	printf("\n");

	return 0;
}