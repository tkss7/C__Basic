//struct3.c
#include<stdio.h>
#include<string.h>
/*

*/

funcA(struct EMPLOYEE *emps);
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


	struct EMPLOYEE emps = { "ȫ�浿",3800000,172.5,"����� ������" },my;

	//funcA(emps);
	funcA(&emps);
	printf("funcA() : %s, %d, %.2f, %s \n", emps.name, emps.salary, emps.height, emps.comAddr);
	my=funcB();

	printf("funcB() : %s, %d, %.2f, %s \n", my.name, my.salary, my.height, my.comAddr);


	return 0;
}

//funcA(struct EMPLOYEE emps)
//{
//	printf("funcA() : %s, %d, %.2f, %s \n", emps.name, emps.salary, emps.height, emps.comAddr);
//
//	emps.salary += 300000;
//}
funcA(struct EMPLOYEE *emps)
{
	printf("funcA() : %s, %d, %.2f, %s \n", emps->name, emps->salary, emps->height, emps->comAddr);

	emps->salary += 300000;
}

struct EMPLOYEE funcB()
{
	struct EMPLOYEE tmp;

	tmp.salary = 2700000;
	strcpy(tmp.name,"������"); //���ڿ� ����� ����� �ּҰ��� �����ִ�. name, "������" �Ѵ� �ּ��̹Ƿ� ���� �����ϱ� ���� strcpy�� ���
	tmp.height = 178;
	strcpy(tmp.comAddr , "���� �����");

	//printf("funcB() : %s, %d, %.2f, %s \n", tmp.name, tmp.salary, tmp.height, tmp.comAddr);

	return tmp;
}