//main_arg1.c
#include <stdio.h>

/*
	��ɾ� ���� �μ� : ��� ������Ʈ���� �������� �ڿ� ���� �μ� ����Ʈ

	c:\> ch13.exe sample 100 // ���� 3�� (ch13.exe , sample , 100 ) ���α׷��� �̸��� �ϳ��� ���ڷ� ó����
	->  7000 ch13\0 //700���� == �ּҸ� ���÷� �� ��
		7100 sample\0
		7200 100\0
		//���鵵 �ϳ��� ���ڷ� ����ϰ� �ʹٸ�? ""�� ������ �� ex)"in tel"
		//ch13.exe sample 100 �Է��ϸ�	argc : 3
										00B93EE8: ch13
										00B93EED: sample test
										00B93EF9: a.txt              �� ����
	�θ� : �ü��
	�ڽ� : main()
	main(int argc char *argv[]) //���� ��ŸƮ

	argc : ��ɾ� ���� ������ ��
	argv : ���ڿ��� �ּ�(�����͹迭)

	���������Ʈ���� ������ ���ڴ� ���鸶�� ���ڿ��� ����

	�̰� �˸� ���ڸ� �ٸ����Ͽ� �����Ҽ� �ִ�?
*/

int main(int argc, char *argv[])
{
	int i;

	printf("argc : %d \n", argc);
	for (i = 0; i < argc; i++)
		printf("%p: %s\n", argv[i], argv[i]);

	return 0;
}