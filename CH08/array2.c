//aray2.c
#include <stdio.h>

/*
배열(Array): 하나의 이름으로 참조되는 같은 자료형을 갖는 데이터들의 집합 >타입이 같아야 함
배열 (고정배열) : 선언하면 크기를 변경할 수 없다.
배열은 보통 넉넉한 사이즈로 선언한다. -> 부족할 수도 있으므로
ARR_SZ-4 : sum
ARR_SZ-3 = AVERAGE
ARR_SZ-2 = MAX
ARR_SZ_1 = MIN

배열의 크기가 바뀌더라도 로직이 바뀌면 안된다.!!!
*/

#define ARR_SZ 104  

int main()
{
	int num[ARR_SZ] = { 0 }; //104개의 배열을 모두 0으로 초기화
	int i,cn, sum = 0, max, min;


	for (i = 0; i < ARR_SZ-4; i++)
	{
		printf("%d, input ? (입력종료 : -999999) ", i + 1);
		scanf("%d%*c", &num[i]);
		//종료조건
		if (num[i] == -99999)
		{
			break;
		}
		num[ARR_SZ-4] += num[i];
	}
	cn = i;
	num[ARR_SZ - 2] = num[ARR_SZ - 1] = num[0];

	//평균
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
	printf("합 : %d, 평균 : %d \n", num[ARR_SZ-4], num[ARR_SZ-3]);
	printf("max : %d, min : %d", num[ARR_SZ - 2], num[ARR_SZ - 1]);


	return 0;
}