//pointer8.c
#include<stdio.h>

/*
	int (*a1)[3]; //�迭������, 4byte
	int *a2[3]; // �����͹迭, 12byte == ���̾� , unsized �迭�� ����
	--> int *a3[] = {};


*/
int main()
{
	int num[3] = { 100,200,300 },i;
	int* p1[3]; // ������ �迭
	char* p2[] = { "kingdom","multi campus","hello world"
		"one �ϳ�","two ��","seoul ����� ������ ���ﵿ 100"
	, "busan �λ�� �ؿ�뱸 �ؿ�뵿 200",NULL};
	printf("sizeof p1 : %d \n", sizeof(p2));

	for (i=0;p2[i];i++) //���̸� ���� == �ּҰ� ������ ���� == NULL ������ ����.
		printf(" %p, %s \n",p2[i],p2[i]);
	////p1�� �ּ� ����
	//for (i = 0; i < 3; i++)
	//	p1[i] = num+i;

	////p1�� ����Ͽ� 100,200,200�� ���
	//for (i = 0; i < 3; i++)
	//	printf("%d, ", *p1[i]);
	return 0;
}