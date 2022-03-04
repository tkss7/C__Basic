#include <stdio.h>

//#define white 0
//#define black 1
//#define yellow 2
//#define red 2
//#define green 3
//#define blue 4

int main()
{
	typedef unsigned long int U_int;
	unsigned long int n1 = 2700000000;

	printf("n1: %u \n", n1);

	U_int n2 = 2800000000;
	printf("n2 : %u \n", n2);

	//나열형 상수
	// 항목에 숫자를 직접 저장하면 그 다음 항목은 무조건 저장한 숫자 +1씩 증가한다.
	enum Color { white=100, black, yellow=200, red, green, blue };


	printf("%d, %d, %d, %d, %d \n", white, black, red, green, blue);
	printf("%d \n", yellow);

	enum Color myColor; // 선언한 이유 : enum Color { white=100, black, yellow=200, red, green, blue }; 에 있는 것만 쓰겠다는 것임
	myColor = blue;
	printf("%d \n", myColor);

	return 0;
}