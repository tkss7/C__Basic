#include <stdio.h>
#include <stdlib.h>
//int balance=0; //�������� ������ ���ȿ� ������ �־ ���� �� �Ⱦ�

int whitdraw(int b);
int deposit(int b);
void balanceOutput(int b);

int main()
{
    int choice;
	int balance = 0;
    while(1)
	{
		printf("\n1) �Ա� \n");
		printf("2) ��� \n");
		printf("3) �ܰ���ȸ \n");
		printf("4) ���� \n");

	   do{
		  printf("   �����ϼ��� ?(1~4) ");
		  scanf("%d", &choice); //1,
	   }while(choice<1 || choice>4);

		switch(choice)
		{
            case 1 : balance = deposit(balance);
						break;
            case 2 :  balance = whitdraw(balance);
						break;
            case 3 :  balanceOutput(balance);
						break;
			case 4 : puts("���α׷��� �����մϴ� ");
						exit(0); //���α׷� �������
		}
   }//while(1) end.

	return 0;
}

int deposit(int b)
{
   int money;

	printf("\n�Ա��� �ݾ��� ? ");
	scanf("%d", &money); //50000
	b += money;
	
	return b;

}

//whitdraw()
//{
//   int money;
//
//	printf("\n����� �ݾ��� ? ");
//	scanf("%d", &money); //30000,
//	if (money <= balance)
//		balance -= money;
//	else
//		printf("�ܰ� �����մϴ�. �����ܰ� : %d�� \n", balance);
//
//}
int whitdraw(int b)
{
	int money;

	printf("\n����� �ݾ��� ? ");
	scanf("%d", &money); //30000,
	if (money <= b)
	{
		b -= money;
	}
	else
		printf("�ܰ� �����մϴ�. �����ܰ� : %d�� \n", b);
	return b;


}
void balanceOutput(int b )
{
   printf("���� �ܰ�� : %d �Դϴ�. \n", b); //20000,
}
