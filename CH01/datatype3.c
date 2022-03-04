#include <stdio.h>

//자료형 수정자
int main(){
	char c1 = 'A';
	unsigned char c2 = 97;
	signed char c3 = 97;

	printf("%c, %d \n", c1, c1);
	printf("%c, %d \n", c2, c2);
	printf("%d, %d \n", sizeof(c1), sizeof(c2));
	printf("%c, %d \n", c3, c3);

	short a1;  //%hd
	int a2;    //%d
	long a3;   //%ld
	long long int a4;   //%lld
	__int64 a5;   //%lld

	printf("%d, %d, %d, %d, %d \n", sizeof(a1), sizeof(a2), sizeof(a3),sizeof(a4),sizeof(a5));
	a4 = 2800000000;
	printf("a4 : %lld\n", a4);

	float f1 = 12345678901234567890;
	double d1 = 12345678901234567890;
	long double d2 = 12345678901234567890;

	printf("f1 : %f \n", f1);
	printf("d1 : %lf \n", d1);
	printf("%d, %llf \n", sizeof(d2), d2);

	return 0;
}
