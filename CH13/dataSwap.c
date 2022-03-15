//dataSwap.c
#include<stdio.h>

/*
	
*/

void swap(void* n1, void** n2, int size);
int main()
{
	short int x1 = 100, x2 = 200;
	int y1 = 300, y2 = 500;
	double d1 = 1.6, d2 = 7.9;
	char name[2][20] = { "kim kang kang","lee sang jae" };

	swap(&x1,&x2,sizeof(x1));
	swap(&y1, &y2, sizeof(y1));
	swap(&d1, &d2, sizeof(d1));
	swap(name[0], name[1], sizeof(name[0]));
	printf("x1: %hd, x2 : %hd \n", x1, x2);
	printf("y1: %d, y2 : %d \n", y1, y2);
	printf("d1: %lf, d2 : %lf \n", d1, d2);
	printf("name[0]: %s, name[1] : %s \n", name[0], name[1]);

	return 0;

}
//일반화 함수(Generic function) :자료형에 구애받지 않고 하나의 로직으로 다양한 데이터를 처리하는 기술
void swap(void *n1, void* *n2, int size)
{
	char tmp;
	int i;
	for (i = 0; i < size; i++)
	{
		tmp = *((char*)n1+i);
		*((char*)n1+i) = *((char*)n2+i);
		*((char*)n2+i) = tmp;
	}
}