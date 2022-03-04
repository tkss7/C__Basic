//aray1.c
#include <stdio.h>

/*
배열(Array): 하나의 이름으로 참조되는 같은 자료형을 갖는 데이터들의 집합 >타입이 같아야 함
			(메모리의 연속적인 공간)

int a1[10] -> 1차원 배열    열
int a2[2][3] -> 2차원 배열      행,열
int a3[3][4][6] -> 3차원 배열       면,행,열
[]안의 내용 ==> 첨자(subscript), Index 라고 부름
첨자가 없는 배열변수는 그 배열이 할당된 메모리의 시작주소를 갖는 포인터 상수다.
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
	printf("%2d, %p, %p \n", num[0], &num[0],num); //첨자가 없는 배열변수는 그 배열이 할당된 메모리의 시작주소를 갖는 포인터 상수다.
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
	printf("합 : %d, 평균 : %.2f \n", sum, sum / 5.0);
	printf("max : %d, min : %d", max, min);


	return 0;
}