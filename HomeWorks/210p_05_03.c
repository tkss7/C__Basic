#include <stdio.h>

int main()
{
	int num, i, prime;

	printf("Enter the number ? ");
	scanf("%d", &num);

	prime = 1;
	for (i = 2; i <= num/2; i++)
	{
		if (num % i == 0)
		{
			prime = 0;
			break;
		}


	}

	if (prime == 1)
		printf("The number is prime. \n");
	else
		printf("The number is not prime. \n");

	//int num, i, prime;

	//printf("Enter the number? : ");
	//scanf("%d%*c", &num);

	//prime = 1;

	//for (i = 2; i <= num / 2; i++)
	//	prime = num % i == 0 ? 0 : ;

	//if (prime == 1)
	//	printf("The number is prime \n");
	//else
	//	printf("THe number is not prime. \n");

	return 0;
}