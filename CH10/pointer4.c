//poiner4.c
#include<stdio.h>

/*
	salCal(salary[0]); //call by value : ���μ��� ���� �Ű������� ���޵�
						//-> �θ� �ڽĿ��� ���� �ѱ� => �Ѱ谡 �и��� ������

	salCal(salary); //call by reference : �޸��� �����ּҰ� �Ű������� �����
						//-> �θ��Լ��� ���μ��� ������ ��ĥ �� ����

?. �׷��� �������� or static�� �����°� ������?
���������� ������ �ٲ� �� �ִ�.
static�� ���� ���� �������� �ٲ� �� �ִ�. == �������� �������� ����
*/
int* funcA();
void funcB();
void funcD();
void salCal(int* tmp, int size);
int main()
{
	int salary[] = { 1500,3000,4500,7000,2700,7800,9000,3500 },i;
	int size;

	size = sizeof(salary) / sizeof(salary[0]);

	salCal(salary,size); //call by reference : �޸��� �����ּҰ� �Ű������� �����
					//-> �θ��Լ��� ���μ��� ������ ��ĥ �� ����

	int* sudang;
	sudang = funcA();
	printf("main() ���� : %d \n", *sudang);

	printf("%d \n", salary[0]);

	funcB();
	funcD();
	return 0;
}

int *funcA()
{
	static int su;
	printf("���� ? ");
	scanf("%d", &su); //300000

	return &su; //������ ���������Ƿ� �Լ��� ���� �� �Ҹ��
}

void funcB()
{
	const float PI = 3.14159F; //������ ���ȭ

	int n1 = 100, n2 = 200;

	int* p1 = &n1;
	*p1 = 150;
	printf("funcB() n1 : %d \n", n1); //150

	const int* p2 = &n2; //������ ���ȭ
	//*p2 = 250; //p2�� �����ϴ� �����ʹ� ���� �Ұ���
	printf("funcB() n1 : %d \n", n2); //200

}

void funcD()
{
	char* p1 = "multi campus!!!";

	//���ڿ� ��� ������ = ���ڿ� ����� ��ȯ�� �ּҰ��� ���� == ���ڿ��� �����Ҽ� ���� -=> ����̱� ����.
	//p1 = "Hello World !!!"; //���ڿ� ����� ��ȯ�� �ּҰ��� ����
	printf("p1: %p, %s \n",p1, p1);
}
//��������� ����Ͽ� ���
void salCal(int *tmp,int size)
//salCal(int tmp[9], int size)
//salCal(int tmp[], int size)
{
	int i, salTot = 0;
	printf("salCal() : %p, %d \n", tmp,sizeof(tmp));

	for (i = 0; i < size; i++)
	{
		printf("%d, ", *(tmp + i)); // *(tmp+i) == *(tmp++)
		salTot += *(tmp + i);
	}
	printf("\n��� : %f \n", (float)salTot / size);

	printf("\n");
}