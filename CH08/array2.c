//aray2.c
#include <stdio.h>

/*
�迭(Array): �ϳ��� �̸����� �����Ǵ� ���� �ڷ����� ���� �����͵��� ���� >Ÿ���� ���ƾ� ��
�迭 (�����迭) : �����ϸ� ũ�⸦ ������ �� ����.
�迭�� ���� �˳��� ������� �����Ѵ�. -> ������ ���� �����Ƿ�
ARR_SZ-4 : sum
ARR_SZ-3 = AVERAGE
ARR_SZ-2 = MAX
ARR_SZ_1 = MIN

�迭�� ũ�Ⱑ �ٲ���� ������ �ٲ�� �ȵȴ�.!!!
*/

#define ARR_SZ 104  

int main()
{
	int num[ARR_SZ] = { 0 }; //104���� �迭�� ��� 0���� �ʱ�ȭ
	int i,cn, sum = 0, max, min;


	for (i = 0; i < ARR_SZ-4; i++)
	{
		printf("%d, input ? (�Է����� : -999999) ", i + 1);
		scanf("%d%*c", &num[i]);
		//��������
		if (num[i] == -99999)
		{
			break;
		}
		num[ARR_SZ-4] += num[i];
	}
	cn = i;
	num[ARR_SZ - 2] = num[ARR_SZ - 1] = num[0];

	//���
	num[ARR_SZ - 3] = num[ARR_SZ - 4] / cn;


	for (i = 1; i <cn; i++)
	{
		if (num[ARR_SZ - 2] < num[i])
			num[ARR_SZ - 2] = num[i];

		if (num[ARR_SZ - 1] > num[i])
			num[ARR_SZ - 1] = num[i];
	}

	printf("\n");
	for (i = 0; i < cn; i++)
	{
		printf("%d, ", num[i]);


	}
	printf("\n");
	printf("�� : %d, ��� : %d \n", num[ARR_SZ-4], num[ARR_SZ-3]);
	printf("max : %d, min : %d", num[ARR_SZ - 2], num[ARR_SZ - 1]);


	return 0;
}