#include <stdio.h>

int main()
{
	char ch='A';
	int i,j,num;

	for (i = 0; i < 26; i++)
	{
		for (j = 0; j < 26; j++)
		{
			printf("%c ", ch + j);
			if (i == j)
				break;
		}
		printf("\n");
	}

	return 0;
}