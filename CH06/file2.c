//file2.c

#include "file.h"
/*
void myName(); //파일별로 함수 선언문이 필요함
void myAge();
void mySal(); //어디서 부를지 모르니깐 일단 선언하자
*/
int salary = 3500000; // 안되는 컴파일러가 더 많음
//extern int salary;
/*
int salary; ==> 이러면 전역변수가 같은게 두개이므로 중복오류처리됨
extern 으로 선언한 변수는 메모리할당을 받지 않고
컴파일러에게 자료형만 알린다.
*/

void mySal()
{
	//printf("수당: %d \n", SUDANG);
	salary += SUDANG;

	//myName();
	//myAge();
}