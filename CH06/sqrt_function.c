//sqrt_function.c
#include <stdio.h>
#include <math.h> //수학함수와 관련된 함수의 원형이 들어있음


int main()
{
	int N;

	printf("input N ? ");
	scanf("%d", &N);

	printf("%d의 제곱근 : %lf \n",N, sqrt((double)N)); //math.h 안하면 함수선언이 안되므로 
	                                                   //int형이라 가정하여 형식이 맞지않는 오류가 발생함 -> 쓰레기값 표시

	return 0;
}