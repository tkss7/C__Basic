//struct5.c
#include<stdio.h>
#include<string.h>
/*
-> : ����ü ������ ������
����ü ����  .���
����ü ������ ���� -> ���

*/

funcA(struct EMPLOYEE emps);
struct EMPLOYEE funcB();

typedef struct EMPLOYEE //�̷��� ����ü�� ���� ������Ͽ��������
{
	char name[20];
	int salary;
	float height;
	char comAddr[50];
}EMP;

int main()
{
	struct EMPLOYEE emps = { "ȫ�浿",3800000,172.5,"����� ������" };
	struct EMPLOYEE* ptr; //����ü ������ ����

	printf("%d, %d \n", sizeof(emps), sizeof(ptr));

	ptr = &emps;//emps�� �����̹Ƿ� & �� ����

	printf("%s, %d, %.2f %s \n", ptr->name,ptr->salary,(*ptr).height,(*ptr).comAddr); // �� �� ������


	return 0;
}