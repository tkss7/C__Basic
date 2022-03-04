//if1.c
#include <stdio.h>

/*
제어문 : 조건제어, 반복제어, 기타제어
조건제어 : if, switch
반복제어 : for, while, do-while
기타제어 : break, continue, goto
*/

int main()
{
	int N;

	printf("input N ? ");
	scanf("%d", &N);  //10, -5

	if (N >= 0)  //참이면 하나의 명령문 실행
	{
		printf("%d, Positive \n", N);
		printf("%d\n", N * 2);
	}
	else
	{
		printf("%d, Negative \n", N);
		printf("%d\n", N * 3);
	}
	printf("End. \n");

	return 0;
}