#include <stdio.h>

/*
Ű����� ���� ���� N�� �Է¹ް�,
1~100������ N�� ����� �հ�, N�� ����� ����Ͻÿ�.

input N? 7
7,14,21...98
7�� ����� �� : ???, ���� : ??
*/


int main()
{
	//1. ��������
	int N,K, sum = 0, i;

	//2. ������ �Է�, N

	printf("input N ? ");
	scanf("%d", &N);
	K = N;
	//3.ó��(�ݺ�, N�� ��� Ȯ��), ���

	for (i = 1; i <= 100 / N; i++)
	{
		sum += i*N;
		printf("%d ", i*N);
	}
	printf("\n");



	//4. ���

	printf("%d�� ����� �� : %d, ���� : %d", K, sum, i - 1);

	return 0;
}