//if1.c
#include <stdio.h>

/*
��� : ��������, �ݺ�����, ��Ÿ����
�������� : if, switch
�ݺ����� : for, while, do-while
��Ÿ���� : break, continue, goto
*/

int main()
{
	int N;

	printf("input N ? ");
	scanf("%d", &N);  //10, -5

	if (N >= 0)  //���̸� �ϳ��� ��ɹ� ����
	{
		printf("%d, Positive \n", N);
		printf("%d\n", N * 2);
	}
	else
	{
		printf("%d, Negative \n", N);
		printf("%d\n", N * 3);
	}
	printf("End. \n");

	return 0;
}