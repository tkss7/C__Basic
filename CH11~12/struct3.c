//struct3.c
#include<stdio.h>
#include<string.h>
/*

*/

funcA(struct EMPLOYEE *emps);
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


	struct EMPLOYEE emps = { "홍길동",3800000,172.5,"서울시 강남구" },my;

	//funcA(emps);
	funcA(&emps);
	printf("funcA() : %s, %d, %.2f, %s \n", emps.name, emps.salary, emps.height, emps.comAddr);
	my=funcB();

	printf("funcB() : %s, %d, %.2f, %s \n", my.name, my.salary, my.height, my.comAddr);


	return 0;
}

//funcA(struct EMPLOYEE emps)
//{
//	printf("funcA() : %s, %d, %.2f, %s \n", emps.name, emps.salary, emps.height, emps.comAddr);
//
//	emps.salary += 300000;
//}
funcA(struct EMPLOYEE *emps)
{
	printf("funcA() : %s, %d, %.2f, %s \n", emps->name, emps->salary, emps->height, emps->comAddr);

	emps->salary += 300000;
}

struct EMPLOYEE funcB()
{
	struct EMPLOYEE tmp;

	tmp.salary = 2700000;
	strcpy(tmp.name,"윤석열"); //문자열 상수는 저장될 주소값을 갖고있다. name, "윤석열" 둘다 주소이므로 값을 저장하기 위해 strcpy를 사용
	tmp.height = 178;
	strcpy(tmp.comAddr , "예비 대통령");

	//printf("funcB() : %s, %d, %.2f, %s \n", tmp.name, tmp.salary, tmp.height, tmp.comAddr);

	return tmp;
}