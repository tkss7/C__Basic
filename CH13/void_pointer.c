//void_pointer.c
#include<stdio.h>

int main()
{
	char ch = 'A';
	int num = 100;
	double dnum = 1.5;

	void* ptr;//void�� ������ : �ڷ����� ���ֹ��� �ʰڴ� : ��� �ڷ����� ��� ����

	ptr = &ch;
	printf("%c \n",*(char*)ptr); // �� �� ���� �������϶� �����ʿ��� �������� �д´�

	ptr = &num;
	printf("%d \n", *(int*)ptr);

	ptr = &dnum;
	printf("%lf \n", *(double*)ptr);


	return 0;
}