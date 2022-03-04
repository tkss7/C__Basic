#include <stdio.h>
//형변환
int main()
{
	int x;
	float y;
	char ch;

	x = 100;
	y = 30.0;

	printf("%d \n", x / 30);
	printf("%f \n", x / 30); 
	printf("%f \n", x / y);//묵시적 형변환
	printf("%d \n", x / (int)y); //명시적 형변환
	//cast 연산자 : 형변환 연산자
	printf("%f \n", (float)x / y);//명시적 형변환 후 ->묵시적 형변환

	//치환에서의 형변환
	y = x; //
	printf("x : %d, y : %f \n", x, y);

	y = 123.456;
	x = y; // y값의 실수부만 들어감
	printf("x : %d, y : %f \n", x, y);

	x = 1000;
	ch = x;
	printf("%d, %d \n", ch, x);


	return 0;
	
}