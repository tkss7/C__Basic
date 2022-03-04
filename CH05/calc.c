#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int num1,num2;
	char op;

	while (1)
	{


		do { // do..while문 == 입력된 값을 검증할 때 주로 사용!!
			printf("더하기(a), 빼기(s), 곱하게(m), 나누기(d), 종료(q) \n");
			printf("연산할 첫 문자를 입력하세요 ? ");
			op = toupper(getchar());   // tolower()
			getchar(); //enter값을 버리는 것
			printf("\n");
		} while (op != 'A' && op != 'S' && op != 'M' && op != 'D'&&op!='Q');

		if (op == 'Q')
			break;

		printf("첫 번째 값 : ");
		scanf("%d", &num1);

		printf("두 번째 값 : ");
		//scanf("%d", &num2);
		scanf("%d%*c",&num2);   // %*c : 1 문자를 무시 *****중요!!!!!******

		if (op == 'A')
			printf("%d + %d = %d \n", num1, num2, num1 + num2);
		else if (op == 'S')
			printf("%d - %d = %d \n", num1, num2, num1 - num2);
		else if (op == 'D')
			if (num2 != 0)
				printf("%d / %d = %d \n", num1, num2, num1 / num2);
			else
				printf("0으로 나눌수 없어요!!\n");
		else if (op == 'M')
			printf("%d * %d = %d \n", num1, num2, num1 * num2);

		//printf("계속할까요 ? (y/n) ");
		//scanf("%c%*c", &op);
		//if (op == 'Y' || op == 'y')
		//	continue;
		//else
		//	break;

	}//while(1) end
	printf("End. \n");

	return 0 ;
}
