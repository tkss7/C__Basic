#include <stdio.h>

int main()
{
	char ch = 'A';
	int num = 100; //���� �ʱ�ȭ
	double dnum;
	dnum = 1.5;
	const float PI = 3.14159258F; // ������ ���ȭ(�ݵ�� �ʱ�ȭ�� �Ͼ�� ��)

	printf("%d, %d, %d \n", sizeof(char), sizeof(int), sizeof(double));
	printf("%d, %d, %d, %d \n", sizeof(ch), sizeof(num), sizeof(PI), sizeof(dnum));
	printf("%f", PI);
	printf("%d, %d \n", sizeof(10), sizeof(1.1));

	printf("%c, %d, %d, %1f \n", ch, num, PI, dnum);
	printf("%p, %p, %p, %p \n", &ch, &num, &PI, &dnum);

	return 0;
}

