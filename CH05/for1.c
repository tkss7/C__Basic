//for1.c
#include <stdio.h>

// for���� ���� 3���� ��� ������ ������ ���ư�

int main()
{
	int i;

	//�ʱ�ȭ;���ǽ�;������
	for (i = 1; i <= 5; i++)
	{
		printf("Hellow World \n");
	}
	printf("\ni: %d. \n",i);

	i = 1;
	for ( ; i <= 5; i++)// �̷��Ե� ����
	{
		printf("Hellow World \n");
	}
	printf("\ni: %d. \n", i);

	for (i = 1; i <= 5; i++)// null���� == ��ȸ������ ��� ���ٰ� i�� ���ǿ��� ����� ����
	{
		printf("Hellow World \n");
	}
	printf("\ni: %d. \n", i);


	return 0;
}