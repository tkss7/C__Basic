//pointer_cast.c
#include<stdio.h>

int main()
{
	char ch = 'A';
	int num = 100;
	double dnum = 1.5;

	char* ptr = &ch;

	printf("%d, %d, %d, %d \n", sizeof(ch), sizeof(num), sizeof(dnum), sizeof(ptr));

	printf("%d, %d, %d, \n", sizeof(ptr), sizeof((int*)ptr), sizeof((double*)ptr));

	printf("%d, %d, %d, \n", sizeof(*ptr), sizeof(*(int*)ptr), sizeof(*(double*)ptr));

	return 0;
}