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

	//������ ���
	// �׸� ���ڸ� ���� �����ϸ� �� ���� �׸��� ������ ������ ���� +1�� �����Ѵ�.
	enum Color { white=100, black, yellow=200, red, green, blue };


	printf("%d, %d, %d, %d, %d \n", white, black, red, green, blue);
	printf("%d \n", yellow);

	enum Color myColor; // ������ ���� : enum Color { white=100, black, yellow=200, red, green, blue }; �� �ִ� �͸� ���ڴٴ� ����
	myColor = blue;
	printf("%d \n", myColor);

	return 0;
}