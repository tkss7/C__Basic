//Test1.c
#include <stdio.h>
#define PI 3.141592
/*
Ű����� ���� ���������Է��Ͽ�(main()) ���� ����(Area())�� ���� �ѷ�(Cir())�� ���Ͽ� ���(main())�Ͻÿ�
*/

double Area(int radius);
double Cir(int radius);

int main()
{
	//1. ��������(�޸� �Ҵ�)
	int radius;
	double area, cir;

	//2. ������ �Է�
	printf("�������� �Է��Ͻÿ�. : ");
	scanf("%d", &radius);

	//3. ó��(���� ����, ���� �ѷ� ���)
	area = Area(radius);
	cir = Cir(radius);

	//4. ���
	printf("���� ���� : %lf \n", area);
	printf("���� �ѷ� : %lf \n", cir);
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