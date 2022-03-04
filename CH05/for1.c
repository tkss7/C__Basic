//for1.c
#include <stdio.h>

// for문은 인자 3개가 없어도 로직만 맞으면 돌아감

int main()
{
	int i;

	//초기화;조건식;증감식
	for (i = 1; i <= 5; i++)
	{
		printf("Hellow World \n");
	}
	printf("\ni: %d. \n",i);

	i = 1;
	for ( ; i <= 5; i++)// 이렇게도 가능
	{
		printf("Hellow World \n");
	}
	printf("\ni: %d. \n", i);

	for (i = 1; i <= 5; i++)// null문장 == 공회전마냥 뱅뱅 돌다가 i가 조건에서 벗어나면 끝남
	{
		printf("Hellow World \n");
	}
	printf("\ni: %d. \n", i);


	return 0;
}