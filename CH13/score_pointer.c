//score_pointer.c
#include<stdio.h>
//�ٸ� �Լ����� ������ �迭�� �ٸ��Լ��� �����Ҷ� �迭�����Ͱ� �ʿ���
//��ü�迭 ũ�⿡�� �ϳ��� ���� ũ�⸦ ������ ���
//�� ���� ũ�⿡�� �ϳ��� ���� ������ ����
void heading();
void scoreCalc(int tmp[][7], int row, int col); // �Լ����𹮿� �������� ��� �ȴ�.
int main()
{
	int score[5][7] = {
		{78,90,61,65},
		{70,98,67,95},
		{77,98,77,65},
		{92,60,61,73},
		{42,50,91,651}
	};
	int row, col, i, j,rank=0;

	row = sizeof(score)/sizeof(score[0]);
	col = sizeof(score[0])/sizeof(score[0][0]);
	printf(" %d, %d \n", row, col);


	scoreCalc(score, row, col);


	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			//printf("%d, ", *(*(tmp+i) + j));
			printf("%d, ", score[i][j]);
		printf("\n");
	}
	return 0;
}

void heading()
{
	printf("===========================================\n");
	printf("����  ����  ����  ����  ����  ���  ���� \n");
	printf("===========================================\n");
}

//score �迭�� ��, ���, ������ ���
//scoreCalc(int (*tmp)[4])// �迭������ ����
void scoreCalc(int tmp[][7],int row, int col)// �迭������ ����
{
	int i, j;
	printf("\nscoreCalc() : %d, %p \n", sizeof(tmp), tmp);
	
	//for (i = 0; i < row; i++)
	//{
	//	for (j = 0; j < col; j++)
	//		//printf("%d, ", *(*(tmp+i) + j));
	//		printf("%d, ", tmp[i][j]);
	//	printf("\n");
	//}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col - 2; j++)
			*(*(tmp+i)+col - 3) += *(*(tmp+i)+j);
		*(*(tmp+i)+col - 2) = *(*(tmp+i)+col - 3) / col - 3;
	}
	for (i = 0; i < row; i++)
	{
		tmp[i][6] = 1;
		for (j = 0; j < row; j++)
		{
			if (*(*(tmp + i) + col - 2) < *(*(tmp + j) + col - 2))
				tmp[i][col-1]++;
		}
	}
		
	

}
//tmp+i == ex) tmp == 100�������  tmp+i = 16������ ������
//*(tmp+i) ==  count�� ���� ��Ÿ��
//*(tmp+i)+j == count�� ���� j��° ���Ұ��� �ּ�
//*(*(tmp+i)+j) ==count�� ���� j��° ���Ұ�