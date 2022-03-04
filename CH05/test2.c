#include <stdio.h>

/*
키보드로 부터 정수 N을 입력받고,
1~100사이의 N의 배수의 합과, N의 배수를 출력하시오.

input N? 7
7,14,21...98
7의 배수의 합 : ???, 갯수 : ??
*/


int main()
{
	//1. 변수선언
	int N,K, sum = 0, i;

	//2. 데이터 입력, N

	printf("input N ? ");
	scanf("%d", &N);
	K = N;
	//3.처리(반복, N의 배수 확인), 출력

	for (i = 1; i <= 100 / N; i++)
	{
		sum += i*N;
		printf("%d ", i*N);
	}
	printf("\n");



	//4. 출력

	printf("%d의 배수의 합 : %d, 갯수 : %d", K, sum, i - 1);

	return 0;
}