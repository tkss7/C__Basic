//struct2.c
#include<stdio.h>
#include<string.h>
/*
* �� ������ ���ȣ�� �ϳ��� �� == ������
*			���ȣ�� �ΰ��� �� == �ּ�
* 
* ����ü����.����ü ���
*/
#define EMP_SZ 30
int main()
{
	int i, Cn = 0;
	typedef struct EMPLOYEE
	{
		char name[20]; 
		int salary;
		float height;
		char comAddr[50];
	}EMP;

	struct EMPLOYEE emps[EMP_SZ] ; //1���� �迭�̹Ƿ� �� ��(==�ּҰ� �ƴ� ������)

	for (i = 0; i < EMP_SZ; i++)
	{
		printf("���� ? (�Է����� : end)");
		gets(emps[i].name);
		//if(strcmp(emps[i].name,"end")==0)
		if (!strcmp(emps[i].name, "end"))
		{
			//Cn = i; // ������ �� ä��� �� ������ �������Ƿ� ���⺸��
			break;
		}
		//Cn++; //�̷��� �ص� ������ �������� ���귮�� �������� ���ɿ� ������ ����

		printf("���� ? ");
		scanf("%d%*c", &emps[i].salary);
		printf("Ű(����) ? ");
		scanf("%f%*c", &emps[i].height);
		printf("ȸ���ּ� ? ");
		gets(emps[i].comAddr);
	}
	Cn = i; //���Ⱑ �´�.
	for (i = 0; i < Cn; i++)
		printf("%s\t%d\t%.2f\t%s \n\n", emps[i].name, emps[i].salary, emps[i].height, emps[i].comAddr);
	


	return 0;
}
