//409p_10_07.c
#include<stdio.h>


void Str_Change(char* ptr);

int main()
{
	char str[50] = " Multi Campus.";
	//char* ptr;

	//printf("before : Multi Campus.");
	printf("before : ");
	gets(str);
	//ptr = str;
	Str_Change(str);


	return 0;
}

void Str_Change(char *ptr)
{
	int i = 0;
	while (*(ptr + i))
	{
		if (*(ptr + i) >= 97)
		{
			*(ptr + i) = *(ptr + i) - 32;
		}
		else if (*(ptr + i) >= 65 && *(ptr + i) <= 96)
		{
			*(ptr + i) = *(ptr + i) + 32;
		}
		i++;
	}
	printf("\n\n\nafter : %s", ptr);
}
