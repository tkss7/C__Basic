//while1.c
#include <stdio.h>

//while : �ݺ�Ƚ���� �� �� �ַ� ���

int main()
{
	char ch;

	ch = 'A';
	while (ch<='Z')
	{
		printf("%c ", ch);
		ch++;
	}
	printf("\n");

	ch = 'A';

	do{                   //�ݺ��� ���� �ڵ带 ������ �ѹ��� �����ؾ� �� �� ���
		printf("%c ", ch);
		ch++;
	} while (ch <= 'Z');
	printf("\n");

	return 0;
}