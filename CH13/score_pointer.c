//score_pointer.c
#include<stdio.h>
//다른 함수안의 다차원 배열을 다른함수를 쓰려할때 배열포인터가 필요함
//전체배열 크기에서 하나의 행의 크기를 나누면 행수
//한 행의 크기에서 하나의 열로 나누면 열수
void heading();
void scoreCalc(int tmp[][7], int row, int col); // 함수선언문에 변수명은 없어도 된다.
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
	printf("국어  영어  수학  과학  총점  평균  석차 \n");
	printf("===========================================\n");
}

//score 배열의 합, 평균, 석차률 계산
//scoreCalc(int (*tmp)[4])// 배열포인터 변수
void scoreCalc(int tmp[][7],int row, int col)// 배열포인터 변수
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
//tmp+i == ex) tmp == 100번지라면  tmp+i = 16번지씩 증가함
//*(tmp+i) ==  count의 행을 나타냄
//*(tmp+i)+j == count의 행의 j번째 원소값의 주소
//*(*(tmp+i)+j) ==count의 행의 j번째 원소값