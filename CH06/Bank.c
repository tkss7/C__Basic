#include <stdio.h>
#include <stdlib.h>
//int balance=0; //전역변수 데이터 보안에 문제가 있어서 보통 잘 안씀

int whitdraw(int b);
int deposit(int b);
void balanceOutput(int b);

int main()
{
    int choice;
	int balance = 0;
    while(1)
	{
		printf("\n1) 입금 \n");
		printf("2) 출금 \n");
		printf("3) 잔고조회 \n");
		printf("4) 종료 \n");

	   do{
		  printf("   선택하세요 ?(1~4) ");
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
			case 4 : puts("프로그램을 종료합니다 ");
						exit(0); //프로그램 즉시종료
		}
   }//while(1) end.

	return 0;
}

int deposit(int b)
{
   int money;

	printf("\n입금할 금액은 ? ");
	scanf("%d", &money); //50000
	b += money;
	
	return b;

}

//whitdraw()
//{
//   int money;
//
//	printf("\n출금할 금액은 ? ");
//	scanf("%d", &money); //30000,
//	if (money <= balance)
//		balance -= money;
//	else
//		printf("잔고가 부족합니다. 현재잔고 : %d원 \n", balance);
//
//}
int whitdraw(int b)
{
	int money;

	printf("\n출금할 금액은 ? ");
	scanf("%d", &money); //30000,
	if (money <= b)
	{
		b -= money;
	}
	else
		printf("잔고가 부족합니다. 현재잔고 : %d원 \n", b);
	return b;


}
void balanceOutput(int b )
{
   printf("현재 잔고는 : %d 입니다. \n", b); //20000,
}
