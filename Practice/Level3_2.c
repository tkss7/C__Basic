//Level3_2.c
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	char star[50] = "";
	char percent[50] ="";
	char sharp[50] = "";
	int s1 = 0, p = 0, s2 = 0;
	int i,randNum;
	srand(time(NULL));

	for (i = 1; i <= 50; i++)
	{
		randNum = rand() % 3;

		switch (randNum)
		{
		case 0:star[s1] = '*';
		{
			s1++;
			break;
		}

		case 1:percent[p] = '%';
		{
			p++;
			break;
		}

		case 2:sharp[s2] = '#';
		{
			s2++;
			break;
		}

		}
	}
	printf("star	: %s, count : %d \n",star,s1);
	printf("percent : %s, count : %d \n", percent, p);
	printf("sharp   : %s, count : %d \n", sharp, s2);

	return 0;
}