//array6.c
#include<stdio.h>

int main()
{
	char names[3][20];
	int i, j;
	//1���� ���ڹ迭�� ���ڿ��� �ϳ� �����Ѵ�.
	
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