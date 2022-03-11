//pointer8.c
#include<stdio.h>

/*
	int (*a1)[3]; //배열포인터, 4byte
	int *a2[3]; // 포인터배열, 12byte == 많이씀 , unsized 배열도 가능
	--> int *a3[] = {};


*/
int main()
{
	int num[3] = { 100,200,300 },i;
	int* p1[3]; // 포인터 배열
	char* p2[] = { "kingdom","multi campus","hello world"
		"one 하나","two 둘","seoul 서울시 강남구 역삼동 100"
	, "busan 부산시 해운대구 해운대동 200",NULL};
	printf("sizeof p1 : %d \n", sizeof(p2));

	for (i=0;p2[i];i++) //참이면 돈다 == 주소가 있으면 돈다 == NULL 전까지 돈다.
		printf(" %p, %s \n",p2[i],p2[i]);
	////p1의 주소 저장
	//for (i = 0; i < 3; i++)
	//	p1[i] = num+i;

	////p1을 사용하여 100,200,200을 출력
	//for (i = 0; i < 3; i++)
	//	printf("%d, ", *p1[i]);
	return 0;
}