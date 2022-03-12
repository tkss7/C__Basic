//point6.c
#include<stdio.h>
/*
	���ȣ�� �������� ���� ���ȣ���� �ٲ�
	count[i][j]==*(count+i)[j] == *(*(count+i)+j);
	ù��° ���ȣ�� ���� ã�� �ι����� ���� ã�´�.
	(*ptr+i) == ���� �ּ�
	*((*ptr+i)+j) == ���� ��

	������ �ڷ��� : ������ �ּ��� ���ü�� �ٸ���.

	1.�����ͺ���
	2.�迭 ������
	3.������ �迭
	4.���� ������
	5.�Լ� ������
	6.void�� ������

	������ ������ ������ �޸��� �ּҰ� Ÿ���� �ٸ���.(����� �ٸ���)
	1. ������ ����
	2. �ּҸ� �������� ���
	3. �ּҸ� ����ϴ� ���

*/
int main()
{
	int count[4][3] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i, j;
	int (*ptr)[3];

	printf("%d, %d, %d, %d \n", sizeof(count), sizeof(count[0]), sizeof(count[0][0]));
	printf("%d, %d, %d, %d \n", sizeof(ptr), sizeof(*ptr), sizeof(*(*ptr)));
	printf("%p, %p, %p, %d \n", count, count[0], &count[0][0], count[0][0]);

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%p, %3d, ",&count[i][j], count[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%p, %3d, ", *(count + i) + j,*(*(count + i) + j));
		printf("\n");
	}
	printf("\n");

	ptr = count;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%p, %3d, ", *(ptr),*((*ptr) + j));
		ptr++;
		printf("\n");
	}
	printf("\n");

	return 0;
}