#include <stdio.h>

int main()
{
	int x = 70, y = 150;
	//���迬����: �� ���� ���Ͽ� ��(1) �Ǵ� ����(0)�� ��ȯ
	printf("%d \n", x >= y);
	printf("%d \n", x < y);
	printf("%d \n", x == y);
	printf("%d \n", x != y);

	//�������� : �� �� �������Ͽ� ���ο� ��(1), ����(0)�� ��ȯ
	//				���� ����� ������ �� �� ���(&& ||, !(������ ����))

	printf("%d \n", x >= 100 && y >= 100); //AND
	printf("%d \n", x >= 100 || y >= 100); //OR

	x = 0;
	printf("!x : %d, !y : %d \n", !x, !y);

	return 0;
}