//fuction_test.c
#include<stdio.h>

//rety-type �Լ���(param list) ==> (��ȯ�� Ÿ��) �Լ��� (�޴� ���� �� Ÿ��)
//�Լ��� � ���� ó���ϴ� ������ �ڵ���� ����

//�Լ���� : 1.�Լ�����, 2.�Լ�ȣ��, 3.�Լ�����(C�� ���û���, C++�� �ʼ�����)

//rety-type : �θ��Լ����� ��ȯ�� �ڷ����� �ִ°�, ����Ÿ���� ����Ʈ ���� int��
//void�� �������
////param list : �θ��Լ��� ���μ��� ������ ��������Ʈ
//rety - type �Լ���(param list) ==> (��ȯ�� Ÿ��) �Լ���(�޴� ���� �� Ÿ��)
//
//return : ���� �θ� �θ��Լ����� ��� ������ ==> ���ͷ�Ʈ
//
//return value : �Լ��� �տ� ���Ϻ��� Ÿ���� �����!!!!, ������ 1������ ��ȯ������
//
//�θ��Լ��� �ڽ��Լ����� �޴� ���ڴ� 30������ ������
//
//
//1.�Լ����� : �Լ��� ����
//3.�Լ����� : ����� �����ؼ� �����Լ� ���� ���̰� �����ݷ��� ����
//���̴� ���� : //�Լ������� �����Ϸ����� �Լ��� ����(����)�� �˸���.
//		 //������ �����ϸ� �����Ϸ��� �Լ��� ��� ���ڸ� int�� �����Ѵ�.
//-- > ���� ���ϸ� int���� �ƴµ� void �����Գ����� �������پ˰� ���ǥ�ø� ��
//
//
//�����Լ� ���� �Լ����Ǹ� �ϸ� �Լ������� �����ص� ��
//���̺귯�� �Լ��� ������� �� ���� �����Ѵ�.



int funcD(); //3.�Լ� �����
//�Լ������� �����Ϸ����� �Լ��� ����(����)�� �˸���.
//������ �����ϸ� �����Ϸ��� �Լ��� ��� ���ڸ� int�� �����Ѵ�
void funcA();
void funcB(int salary);
float funcE(int salTot, float rate);

int main() //�ڵ�����
{
	int age = 20;
	int salary = 3500000;
	int sudang;
	float tax;
;
	printf("main() start. \n");
	funcA(); //���μ�
	funcB(salary); //�����μ�, ���μ�
	sudang = funcD(); //2.�Լ� ȣ���

	tax = funcE(salary + sudang, 0.03);
	printf("main() ���� : %f \n", tax);

	printf("main() ���� : %d \n", sudang);
	printf("main() end. \n");



	return 0;
}

float funcE(int salTot, float rate)
{
	//printf("funcE() %d, %f \n", salTot, rate);
	//printf("funcE() ����: %f \n", salTot* rate);
	return salTot * rate;
}
//1.�Լ� ���Ǻ�
int funcD() //�Լ� ���
{			//�Լ� �ٵ�
	int over_time = 15;
	//printf("funD() �߱ټ��� : %d", over_time * 35000);
	return over_time * 35000; //return value : �Լ��� �տ� ���Ϻ��� Ÿ���� �����!!!!
}

void funcA()
{
	printf("funcA() start. \n");
	printf("funcA() end. \n");
	return; // ���� �θ� �θ��Լ����� ��� ������ ==> ���ͷ�Ʈ
}

//�ڷ����� ������ �¾ƾ��Ѵ�
void funcB(int salary) //�Ű�����, ���μ�
{
	printf("funcB start. \n");
	printf("salary : %d \n", salary);
	printf("funcB end. \n");
}