//func_pointer1.c
#include<stdio.h>

/*
	�Լ������� : �Լ��� �θ�
	int (*a1)[3] //�迭������ (2����), 4 == �ι�°�� ���ȣ

	int *a2[3] // ������ �迭 , 12

	int (*a3)(int); //�Լ������ͺ���, 4 == �ι�°�� �Ұ�ȣ

						process
		stack
		heap
		data	
		code	ex)main(), printf()... �Լ��鵵 �޸𸮿� �Ҵ����( �ּ� ����)

		�Լ������ʹ� �ݹ��� �Ϸ��� �Լ������͸� �˾ƾ���, *�ݹ��Լ����� �ݵ�� �ʿ�!!!!*
*/
// �Ⱥ��� ������== �����ϸ� �帧�� ����
void myFunc(char* tmp);

int main()
{
	void (*fptr)(char*); //�Լ������� ���� ���� ������ ������ Ÿ�ӿ��� ������, �������� ��Ÿ�Ӷ� �ʿ��� ���� ���� ����? ���� �ʿ�� X
	// �ݹ��� �Ϸ��� �Լ������͸� �˾ƾ���, *�ݹ��Լ����� �ݵ�� �ʿ�!!!!*
	printf("fptr sizeof : %d \n", sizeof(fptr));

	fptr = myFunc; //�Լ� �ּ� �Ҵ�

	(*fptr)("multi campus"); //�Լ� ȣ�� => ������ ȣ�� ����
	fptr("���Ǵ�Ʈ �ｺ�ɾ�"); //������ �ȵǾ��µ� �����Ϸ� �������� �߰���
	//myFunc("this is sa test.");

	return 0;
}

void myFunc(char *tmp)
{
	printf("myFunc() : %p, %s \n",tmp,tmp );
}