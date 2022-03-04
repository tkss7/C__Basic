#include  <stdio.h>

int main()
{
	int N;

	printf("성별 ? (0:남,1여)");
	scanf("%d",&N);


	printf("%s \n", N == 0 ? "남성" : N == 1 ? "여성" : "입력오류");



	return 0;
}