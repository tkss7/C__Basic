//gets_s.c

#include<stdio.h>
#include<conio.h> //����� ����� �������

int main()
{
	char name[20];
	char comAddr[50];

	printf("���� ? ");
	scanf_s("%s%*c",name, 20); //�ڱⰡ �ʿ��� ��ŭ �������� ������ �Է¹��ۿ� ���ܳ���
	//gets_s(name, 20);

	printf("ȸ���ּ� ? ");
	gets_s(comAddr, 30); // ������ ���μ��� ������Ŵ

	printf("%s, %s \n", name, comAddr);
}