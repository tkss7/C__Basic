//struct1.c
#include<stdio.h>
/*
* 16bit O/S -> 2GB
32bit O/S -> 4GB
64bit O/S -> ũ������ X

����ü(struct) = ��������� �ڷ���
				������ �ִ� �����͵��� �ϳ��� �ڷ�������
				����� ��� �����ϰ� �Ѵ�.
�������� ������ ���� �ַ� �빮�ڷ� ������
struct EMPLOYEE{
}tmp; <= �ϸ� ����ü ����� ���ÿ� tmp �ϳ� ����
����ü�� �Ҵ�Ǵ� ũ��
=> �츮�� ������ ����� ũ��� ���ų� ũ��
�����͸� �Է¹��� �� &emp.salary
�ּҸ� �Է¹��� �� emp.name

typedef = ������ �ִ� �ڷ��� ������
ex) struct EMPLOYEE emps;
=> typedef struct EMPLOYEE EMP; //== struct EMPLOYEE ó�� �� ���� EMP �� �� �� �ְ� ����
   EMP emps;

	���� ���̴� ����
	typedef struct EMPLOYEE {

	} EMP; //����ü�� ����� ���ÿ� ������ �ϴ°�� == �� ��츦 ���� ��

	����ü�� "}" �ڿ� ����?�� ���� �� typedef�� ������ ������
									typedef�� ������ ����ü����

	�±׳����� ��� �ǳ� ���߿� �� �ʿ��� ��찡 �����Ƿ� �׳� ����!!!!!
*/

int main()
{
	typedef struct EMPLOYEE
	{
		//��������� �ڷ��� ����
		char name[20]; //��� ����Ʈ
		int salary;
		float height;
		char comAddr[50];
	}EMP;
	//����ü ����(���� �ڷ��� ����)
	struct EMPLOYEE emps = { "ȫ�浿",3800000,172.5,"����� ������" };
	//printf("%s \n", salary); //����
	printf("%d, %d \n", sizeof(emps), sizeof(struct EMPLOYEE));
	EMP tmp;

/*
	printf("���� ? ");
	gets(emps.name);
	printf("���� ? ");
	scanf("%d%*c",&emps.salary);
	printf("Ű(����) ? ");
	scanf("%f%*c",&emps.height);
	printf("ȸ���ּ� ? ");
	gets(emps.comAddr);
*/
	printf("============================\n");
	//printf("�����ȣ	�μ���	����	����	����	�⺻��	����	����	�Ǽ��ɾ�\n");
	printf("����	����	Ű	�ּ�	\n");
	printf("============================\n");
	printf("%s\t%d\t%.2f\t%s \n\n", emps.name, emps.salary, emps.height, emps.comAddr);

	tmp = emps; //����ü ���� ����
				//����ü ������ ������� ����(����)�̹Ƿ� ���� ������� ���簡 �ս��� �����ϴ�.
	printf("%s\t%d\t%.2f\t%s \n\n", tmp.name, tmp.salary, tmp.height, tmp.comAddr);

	return 0;
}
