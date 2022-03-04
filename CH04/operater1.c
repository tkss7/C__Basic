//operater1.c
#include <stdio.h>
/*
++x : 증가하고 표시 ( 선 증가 후 표시)
x++ : 표시하고 증가 (선 표시 후 증가)

증감연산이 단독으로 표시되는 경우는 전위 후위연산 차이가 없음

관계와 논리연산자중 우선권은 관계연산자

! ==> 논리값의 부정

*/
int main()
{
	//증감연산자  ++,-- (변수의 값을 1 증가하거나 감소시킨다)
	
	int x = 100, y = 200;

	printf("x : %d \n", x);
	x++; //x=x+1;
	printf("x : %d \n", x);
	x--;
	printf("x : %d \n", x);

	printf("x : %d, y : %d \n", ++x, y++);
	printf("x : %d, y : %d \n", x, y);
	printf("x : %d, y : %d \n", --x, y--);
	printf("x : %d, y : %d \n", x, y);
	return 0;
}