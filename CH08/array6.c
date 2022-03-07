//array6.c
#include<stdio.h>

int main()
{
	char names[3][20];
	int i, j;
	//1차원 문자배열은 문자열을 하나 저장한다.
	
	for(i=0;i<3;i++)
	{	printf("input name ? ");
		gets(names[i]);
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d. %s \n", i,names[i]);
	}




	return 0;
}