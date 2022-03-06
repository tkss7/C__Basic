#include <stdio.h>

void Add(int n1, int n2);

void Sub(int n1, int n2);

void Mul(int n1, int n2);

void Div(int n1, int n2);

int main()
{
	int x, y, tmp, select, result;

	while (1)
	{
		printf("\n1. Add \n");
		printf("2. Subtract \n");
		printf("3. Multiplay \n");
		printf("4. Divide \n");
		printf("5. End \n");
		printf("Select? ");
		scanf("%d", &select);
		if (select == 5)
			break;

		printf("\n두 정수를 입력하세요? ");
		scanf("%d%d", &x, &y);

		if (x < y)
		{
			tmp = x;
			x = y;
			y = tmp;
		}
		switch (select)
		{
		case 1: Add(x,y);
			break;
		case 2: Sub(x,y);
			break;
		case 3: Mul(x,y);
			break;
		case 4: Div(x,y);
			break;
		}
	}
	return 0;
}

void Add(int n1, int n2)
{
	printf("%d + %d = %d \n", n1, n2, n1 + n2);
}

void Sub(int n1, int n2)
{
	printf("%d - %d = %d \n", n1, n2, n1 - n2);
}

void Mul(int n1, int n2)
{
	printf("%d * %d = %d \n", n1, n2, n1 * n2);
}

void Div(int n1, int n2)
{
	printf("%d / %d = %d \n", n1, n2, n1 / n2);
}
