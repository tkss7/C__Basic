#include <stdio.h>

int main()
{
	char ch = 'A';
	int num = 100; //변수 초기화
	double dnum;
	dnum = 1.5;
	const float PI = 3.14159258F; // 변수를 상수화(반드시 초기화가 일어나야 함)

	printf("%d, %d, %d \n", sizeof(char), sizeof(int), sizeof(double));
	printf("%d, %d, %d, %d \n", sizeof(ch), sizeof(num), sizeof(PI), sizeof(dnum));
	printf("%f", PI);
	printf("%d, %d \n", sizeof(10), sizeof(1.1));

	printf("%c, %d, %d, %1f \n", ch, num, PI, dnum);
	printf("%p, %p, %p, %p \n", &ch, &num, &PI, &dnum);

	return 0;
}

