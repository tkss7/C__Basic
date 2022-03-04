//ns_loop2.c
#include <stdio.h>

int main()
{
	int i,j, dan;

	for (dan = 2; dan <= 9; dan++)
	{
		for (i = 1; i <= 9; i++)
		{
			printf("%d * %d = %2d	", dan, i, dan * i);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 1; i <= 9; i++)
	{
		for (dan = 2; dan <= 9; dan++)
		{
			printf("%d * %d = %2d	", dan, i, dan * i);
		}
		printf("\n");
	}
	printf("\n");
	//while문으로 변경
	dan = 2;
	
	while (dan <= 9)
	{
		i = 1;
		while (i <= 9)
		{
			printf("%d * %d = %2d	", dan, i, dan * i);
			i++;
		}
		dan++;
		printf("\n");
	}



	return 0;
}