//file1.c
#include <stdio.h> //시스템디렉토리에 있는 헤더파일
#include "file.h" //작업대상 디렉토리 헤더파일(사용자정의 헤더파일) -> 사용자정의 헤더파일에 없으면 시스템디렉토리까지 뒤져봄
/*
.h : 헤더파일
-> 1. 시스템 헤더파일 , 2. 사용자정의 헤더파일 (**)
드라이브경로(C:\~ )이런식이면 <>(꺽새)로 헤더파일 지정 가능
사용자정의 헤더파일은 유지보수를 쉽게함(공통으로 들어갈 내용들을 적어놓고 include 시켜서 쓰는것
*/
//void myName();
//void myAge();
//void mySal();

int salary = 3500000; //전역변수
int main()
{
	myName();
	myAge();
	mySal();

	printf("수령액 : %d \n", salary);

	return 0;
}

void myName()
{
	printf("성명 : 홍길동 \n");
}

void myAge()
{
	printf("나이 : %d \n",AGE);
}