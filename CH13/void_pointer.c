//void_pointer.c
#include<stdio.h>

int main()
{
	char ch = 'A';
	int num = 100;
	double dnum = 1.5;

	void* ptr;//void형 포인터 : 자료형에 구애받지 않겠다 : 모든 자료형에 사용 가능

	ptr = &ch;
	printf("%c \n",*(char*)ptr); // 둘 다 단항 연산자일때 오른쪽에서 왼쪽으로 읽는다

	ptr = &num;
	printf("%d \n", *(int*)ptr);

	ptr = &dnum;
	printf("%lf \n", *(double*)ptr);


	return 0;
}