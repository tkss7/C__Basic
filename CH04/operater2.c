#include <stdio.h>

int main()
{
	int x = 70, y = 150;
	//관계연산자: 두 값을 비교하여 참(1) 또는 거짓(0)을 반환
	printf("%d \n", x >= y);
	printf("%d \n", x < y);
	printf("%d \n", x == y);
	printf("%d \n", x != y);

	//논리연산자 : 두 논리 값을비교하여 새로운 참(1), 거짓(0)을 반환
	//				비교할 대상이 여러개 일 때 사용(&& ||, !(논리값의 부정))

	printf("%d \n", x >= 100 && y >= 100); //AND
	printf("%d \n", x >= 100 || y >= 100); //OR

	x = 0;
	printf("!x : %d, !y : %d \n", !x, !y);

	return 0;
}