//arrya5.c
#include <stdio.h>

#define row 5
#define columm 7
/*
int a1[5]; => a1[0] //��[������]
int a2[2][3] => a2[0] //��[�ּ�]
���� C���� ���๮�� �߰��� �������� �ϸ� ������
C���� �������� ���̱� ���� ���� �÷��� ���ִ� ���� ����

*/
void heading();
int main()
{
	int i, j,rank;
	int score[row][columm] = {//5��7���̹Ƿ� 4���� �����Է��ϸ� ������ 3���� �����ʹ� 0����  �ڵ� �ʱ�ȭ�Ѵ�.
		{78,60,95,85},
		{77,80,75,35},
		{21,15,98,75},
		{45,82,54,61},
		{73,76,59,26}
	};
	char names[5][20] = { "ȫ�浿","�̸���","������","�����","���л�" };
	printf("%p, %p \n", score,score[1]); // 2�����迭�� ��� score[1] �� ���� �ุ ������ �ش� ���� �����ּҸ� �� �� �ִ�.
	printf("%p, %p, %p, %p, %p \n", score[0], score[1], score[2], score[3], score[4]);
	printf("\n");
	heading();

	for (int i = 0; i < row; i++)
	{
		printf("%s	", names[i]);
		for (int j = 0; j < columm; j++)
		{
			printf("%3d\t", score[i][j]);
			if(j < columm - 3)
				score[i][columm - 3] += score[i][j];
			//����
			if (j == columm - 3)
			{
				score[i][columm - 2] = score[i][columm - 3] / (columm - 3);
				printf("%3d\t", score[i][columm-2]);
				break;
			}

		}
		//���
	printf("\n");
	}
	printf("\n");
	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < columm-3; j++)
		{
			printf("%3d\t", score[i][j]);
			//����
			score[i][4] += score[i][j];

		}
		printf("\n");
		score[i][5] = score[i][4] / 4;
	}
		printf("\n");
		for (i=0;i<5;i++)
		{
			score[i][6] = 1;
			for (j=0;j<5;j++)
			{
				if (score[i][5] > score[j][5])
				{
					score[i][6]++;
				}
			}
		}

	printf("\n");
	heading();
	for ( i = 0; i < row; i++)
	{
		printf("%s	", names[i]);
		for ( j = 0; j < columm; j++)
		{
				printf("%3d\t", score[i][j]);
		}
			printf("\n");
	}



	return 0;
}

void heading();
{
	printf("==============================================================\n");
	printf("����	����	����	����	����	����	���	���� \n");
	printf("==============================================================\n");
}