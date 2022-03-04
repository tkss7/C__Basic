#include <stdio.h>

int main()
{
	int x, y;
	
	printf("input x ?");
	scanf_s("%d", &x);
	printf("input y ?");
	scanf_s("%d", &y);

	printf("%d + %d = %d \n", x, y, x + y);
	printf("%d - %d = %d \n", x, y, x - y);
	printf("%d * %d = %d \n", x, y, x * y);
	printf("%d / %d = %d \n", x, y, x / y);
	printf("%d %% %d = %d \n", x, y, x % y); // % = 나머지 구하는 연산자

	return 0;
}