#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int num1,num2;
	char op;

	while (1)
	{


		do { // do..while�� == �Էµ� ���� ������ �� �ַ� ���!!
			printf("���ϱ�(a), ����(s), ���ϰ�(m), ������(d), ����(q) \n");
			printf("������ ù ���ڸ� �Է��ϼ��� ? ");
			op = toupper(getchar());   // tolower()
			getchar(); //enter���� ������ ��
			printf("\n");
		} while (op != 'A' && op != 'S' && op != 'M' && op != 'D'&&op!='Q');

		if (op == 'Q')
			break;

		printf("ù ��° �� : ");
		scanf("%d", &num1);

		printf("�� ��° �� : ");
		//scanf("%d", &num2);
		scanf("%d%*c",&num2);   // %*c : 1 ���ڸ� ���� *****�߿�!!!!!******

		if (op == 'A')
			printf("%d + %d = %d \n", num1, num2, num1 + num2);
		else if (op == 'S')
			printf("%d - %d = %d \n", num1, num2, num1 - num2);
		else if (op == 'D')
			if (num2 != 0)
				printf("%d / %d = %d \n", num1, num2, num1 / num2);
			else
				printf("0���� ������ �����!!\n");
		else if (op == 'M')
			printf("%d * %d = %d \n", num1, num2, num1 * num2);

		//printf("����ұ�� ? (y/n) ");
		//scanf("%c%*c", &op);
		//if (op == 'Y' || op == 'y')
		//	continue;
		//else
		//	break;

	}//while(1) end
	printf("End. \n");

	return 0 ;
}
