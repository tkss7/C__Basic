//variableScope.c
#include <stdio.h>

funcA(int age);

int salary = 37000000; //�������� (��� �Լ��� ����)

int main()
{
	int age = 27;

	printf("main() age : %d,%p salary : %d,%p \n", age,&age,salary,&salary);
	funcA(age);
	printf("main() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary);
	funcB();
	printf("main() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary);

	funcD();
	funcD();
	funcD();

	return 0;
}

funcD()
{
	int sum1 = 1;		 //��������
	static int sum2 = 1; //�������� == �ѹ��� �ʱ�ȭ�ϸ� ���� ������Ų��.
	//									����, �� �Լ��� ������ ȣ���� �ʿ䰡 ���� �� �� �Լ��� ����� �������� ������Ű�� ������ ��

	printf("sum1: %d, sum2: %d \n", sum1++, sum2++);
}

funcA(int age) //���������� �Լ��� ȣ��� �� �Ҵ�ް� �Լ��� ������ �����ȴ�.
{
	printf("main() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary);
	age = 35;
	salary += 2000000;
}

funcB()
{
	int age = 7;
	int salary = 1000;//��������
	printf("main() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary);
}