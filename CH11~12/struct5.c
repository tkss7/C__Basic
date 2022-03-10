//struct5.c
#include<stdio.h>
#include<string.h>
/*
-> : 구조체 포인터 연산자
구조체 변수  .멤버
구조체 포인터 변수 -> 멤버

*/

funcA(struct EMPLOYEE emps);
struct EMPLOYEE funcB();

typedef struct EMPLOYEE //이러한 구조체는 보통 헤더파일에집어넣음
{
	char name[20];
	int salary;
	float height;
	char comAddr[50];
}EMP;

int main()
{
	struct EMPLOYEE emps = { "홍길동",3800000,172.5,"서울시 강남구" };
	struct EMPLOYEE* ptr; //구조체 포인터 변수

	printf("%d, %d \n", sizeof(emps), sizeof(ptr));

	ptr = &emps;//emps가 변수이므로 & 가 붙음

	printf("%s, %d, %.2f %s \n", ptr->name,ptr->salary,(*ptr).height,(*ptr).comAddr); // 둘 다 가능함


	return 0;
}