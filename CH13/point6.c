//point6.c
#include<stdio.h>
/*
	대괄호가 여려개면 안쪽 대괄호부터 바뀜
	count[i][j]==*(count+i)[j] == *(*(count+i)+j);
	첫번째 대괄호는 행을 찾고 두번쨰가 열을 찾는다.
	(*ptr+i) == 행의 주소
	*((*ptr+i)+j) == 열의 값

	포인터 자료형 : 저장할 주소의 대상체가 다르다.

	1.포인터변수
	2.배열 포인터
	3.포인터 배열
	4.다중 포인터
	5.함수 포인터
	6.void형 포인터

	포인터 변수에 저장할 메모리의 주소가 타입이 다르다.(대상이 다르다)
	1. 포인터 선언문
	2. 주소를 가져오는 방법
	3. 주소를 사용하는 방법

*/
int main()
{
	int count[4][3] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i, j;
	int (*ptr)[3];

	printf("%d, %d, %d, %d \n", sizeof(count), sizeof(count[0]), sizeof(count[0][0]));
	printf("%d, %d, %d, %d \n", sizeof(ptr), sizeof(*ptr), sizeof(*(*ptr)));
	printf("%p, %p, %p, %d \n", count, count[0], &count[0][0], count[0][0]);

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%p, %3d, ",&count[i][j], count[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%p, %3d, ", *(count + i) + j,*(*(count + i) + j));
		printf("\n");
	}
	printf("\n");

	ptr = count;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%p, %3d, ", *(ptr),*((*ptr) + j));
		ptr++;
		printf("\n");
	}
	printf("\n");

	return 0;
}