#include <stdio.h>
void func_1(void);
void func_2(void);
void func_3(void);

int main(void)
{
	//func_1();
	//func_2();
	func_3();

	return 0 ;
}

void func_1(void)
{
    int first, second;
	
	printf("�� ���� �Է��ϼ��� ? ");
	scanf("%d%d", &first, &second);

	printf("first : %d, second : %d \n", first, second);
}

void func_2(void)
{
     int first, second;
	 char op=0;
	 
	 // %*c ==> ���ڸ� ����
	 // %c ==> ���ڸ� ����
	 printf("��ȭ��ȣ�� �Է��ϼ��� ? "); //3429-5514
	 scanf("%d%c%d", &first, &op,  &second);

	 printf("first : %d, second : %d \n", first, second);
	 printf("op: %d, %c \n", op, op);
}

void func_3(void)
{
     int first, second;
	 
	 printf("5�ڸ��̻� ���ڸ� �Է��ϼ��� ? "); //12345678
	 scanf("%3d%d", &first, &second); // ó�� 3�ڸ��� first�� �ް� �������� second�� �־��
	 
	 printf("first : %d, second : %d \n", first, second);
}

