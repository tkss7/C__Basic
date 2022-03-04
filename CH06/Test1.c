//Test1.c
#include <stdio.h>
#define PI 3.141592
/*
키보드로 부터 반지름을입력하여(main()) 원의 넓이(Area())와 원의 둘레(Cir())를 구하여 출력(main())하시오
*/

double Area(int radius);
double Cir(int radius);

int main()
{
	//1. 변수선언(메모리 할당)
	int radius;
	double area, cir;

	//2. 데이터 입력
	printf("반지름을 입력하시오. : ");
	scanf("%d", &radius);

	//3. 처리(원의 넓이, 원의 둘레 계산)
	area = Area(radius);
	cir = Cir(radius);

	//4. 출력
	printf("원의 넓이 : %lf \n", area);
	printf("원의 둘레 : %lf \n", cir);
	printf("PI : %lf", PI);


	return 0;
}

double Area(int radius)
{
	return radius * radius * PI;
}
double Cir(int radius)
{
	return PI * 2 * radius;
}