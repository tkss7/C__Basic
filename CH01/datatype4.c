#include <stdio.h>
//����ȯ
int main()
{
	int x;
	float y;
	char ch;

	x = 100;
	y = 30.0;

	printf("%d \n", x / 30);
	printf("%f \n", x / 30); 
	printf("%f \n", x / y);//������ ����ȯ
	printf("%d \n", x / (int)y); //����� ����ȯ
	//cast ������ : ����ȯ ������
	printf("%f \n", (float)x / y);//����� ����ȯ �� ->������ ����ȯ

	//ġȯ������ ����ȯ
	y = x; //
	printf("x : %d, y : %f \n", x, y);

	y = 123.456;
	x = y; // y���� �Ǽ��θ� ��
	printf("x : %d, y : %f \n", x, y);

	x = 1000;
	ch = x;
	printf("%d, %d \n", ch, x);


	return 0;
	
}