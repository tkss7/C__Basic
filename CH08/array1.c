//aray1.c
#include <stdio.h>

/*
�迭(Array): �ϳ��� �̸����� �����Ǵ� ���� �ڷ����� ���� �����͵��� ���� >Ÿ���� ���ƾ� ��
			(�޸��� �������� ����)

int a1[10] -> 1���� �迭    ��
int a2[2][3] -> 2���� �迭      ��,��
int a3[3][4][6] -> 3���� �迭       ��,��,��
[]���� ���� ==> ÷��(subscript), Index ��� �θ�
÷�ڰ� ���� �迭������ �� �迭�� �Ҵ�� �޸��� �����ּҸ� ���� ������ �����.
*/

int main()
{
	int num[5];
	int i, sum = 0, max, min;
	//for (i = 0; i < 5; i++)
	//{
	//	num[i] = i * 10;
	//	printf("%2d, %p, ", num[i], &num[i]);
	//	printf("%2d, %d \n", sizeof(num[i]), sizeof(num));
	//}
	printf("%2d, %p, %p \n", num[0], &num[0],num); //÷�ڰ� ���� �迭������ �� �迭�� �Ҵ�� �޸��� �����ּҸ� ���� ������ �����.
	printf("%2d, %d \n", sizeof(num[0]), sizeof(num));

	for(i=0;i<5;i++)
	{
		printf("%d, input ? ",i+1);
		scanf("%d%*c",&num[i]);
	}

	max = min = num[0];
	for (i = 1; i < 5; i++)
	{
		if (max < num[i])
			max = num[i];
		
		if (min > num[i])
			min = num[i];
	}

	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d, ", num[i]);
		sum += num[i];

	}
	printf("\n");
	printf("�� : %d, ��� : %.2f \n", sum, sum / 5.0);
	printf("max : %d, min : %d", max, min);


	return 0;
}