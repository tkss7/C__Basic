//func_pointer1.c
#include<stdio.h>

/*
	함수포인터 : 함수를 부름
	int (*a1)[3] //배열포인터 (2차원), 4 == 두번째가 대괄호

	int *a2[3] // 포인터 배열 , 12

	int (*a3)(int); //함수포인터변수, 4 == 두번째가 소괄호

						process
		stack
		heap
		data	
		code	ex)main(), printf()... 함수들도 메모리에 할당받음( 주소 있음)

		함수포인터는 콜백을 하려면 함수포인터를 알아야함, *콜백함수에서 반드시 필요!!!!*
*/
// 안보고 만들어보기== 연습하면 흐름이 잡힘
void myFunc(char* tmp);

int main()
{
	void (*fptr)(char*); //함수포인터 변수 선언 선언문은 컴파일 타임에서 동작함, 변수명은 런타임때 필요함 따라서 선언에 굳이? 적을 필요는 X
	// 콜백을 하려면 함수포인터를 알아야함, *콜백함수에서 반드시 필요!!!!*
	printf("fptr sizeof : %d \n", sizeof(fptr));

	fptr = myFunc; //함수 주소 할당

	(*fptr)("multi campus"); //함수 호출 => 원래의 호출 버전
	fptr("인피니트 헬스케어"); //원래는 안되었는데 컴파일러 버전에서 추가됨
	//myFunc("this is sa test.");

	return 0;
}

void myFunc(char *tmp)
{
	printf("myFunc() : %p, %s \n",tmp,tmp );
}