//arrya5.c
#include <stdio.h>

#define row 5
#define columm 7
/*
int a1[5]; => a1[0] //열[데이터]
int a2[2][3] => a2[0] //행[주소]
원래 C언어는 실행문들 중간에 변수선언 하면 오류뜸
C언어는 가독성을 높이기 위해 위에 올려서 해주는 것이 좋음

*/
void heading();
int main()
{
	int i, j,rank;
	int score[row][columm] = {//5행7열이므로 4개의 열을입력하면 나머지 3열의 데이터는 0으로  자동 초기화한다.
		{78,60,95,85},
		{77,80,75,35},
		{21,15,98,75},
		{45,82,54,61},
		{73,76,59,26}
	};
	char names[5][20] = { "홍길동","이몽룡","성춘향","김수미","박학생" };
	printf("%p, %p \n", score,score[1]); // 2차원배열의 경우 score[1] 과 같이 행만 찍으면 해당 행의 시작주소를 알 수 있다.
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
			//총점
			if (j == columm - 3)
			{
				score[i][columm - 2] = score[i][columm - 3] / (columm - 3);
				printf("%3d\t", score[i][columm-2]);
				break;
			}

		}
		//평균
	printf("\n");
	}
	printf("\n");
	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < columm-3; j++)
		{
			printf("%3d\t", score[i][j]);
			//총점
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
	printf("성명	국어	수학	영어	과학	총점	평균	석차 \n");
	printf("==============================================================\n");
}