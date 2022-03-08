//struct1.c
#include<stdio.h>
/*
* 16bit O/S -> 2GB
32bit O/S -> 4GB
64bit O/S -> 크기제한 X

구조체(struct) = 사용자정의 자료형
				관련이 있는 데이터들을 하나의 자료형으로
				만들어 사용 가능하게 한다.
변수와의 구분을 위해 주로 대문자로 선언함
struct EMPLOYEE{
}tmp; <= 하면 구조체 선언과 동시에 tmp 하나 만듦
구조체가 할당되는 크기
=> 우리가 눈으로 계산한 크기와 같거나 크다
데이터면 입력받을 때 &emp.salary
주소면 입력받을 때 emp.name

typedef = 기존에 있는 자료형 재정의
ex) struct EMPLOYEE emps;
=> typedef struct EMPLOYEE EMP; //== struct EMPLOYEE 처럼 긴 것을 EMP 만 쓸 수 있게 해줌
   EMP emps;

	자주 쓰이는 형태
	typedef struct EMPLOYEE {

	} EMP; //구조체를 선언과 동시에 재정의 하는경우 == 이 경우를 많이 씀

	구조체의 "}" 뒤에 변수?가 있을 때 typedef가 있으면 재정의
									typedef가 없으면 구조체변수

	태그네임이 없어도 되나 나중에 꼭 필요한 경우가 있으므로 그냥 쓰자!!!!!
*/

int main()
{
	typedef struct EMPLOYEE
	{
		//사용자정의 자료형 선언
		char name[20]; //멤버 리스트
		int salary;
		float height;
		char comAddr[50];
	}EMP;
	//구조체 변수(통합 자료형 변수)
	struct EMPLOYEE emps = { "홍길동",3800000,172.5,"서울시 강남구" };
	//printf("%s \n", salary); //변수
	printf("%d, %d \n", sizeof(emps), sizeof(struct EMPLOYEE));
	EMP tmp;

/*
	printf("성명 ? ");
	gets(emps.name);
	printf("월급 ? ");
	scanf("%d%*c",&emps.salary);
	printf("키(신장) ? ");
	scanf("%f%*c",&emps.height);
	printf("회사주소 ? ");
	gets(emps.comAddr);
*/
	printf("============================\n");
	//printf("사원번호	부서명	성명	나이	전번	기본급	수당	세율	실수령액\n");
	printf("성명	월급	키	주소	\n");
	printf("============================\n");
	printf("%s\t%d\t%.2f\t%s \n\n", emps.name, emps.salary, emps.height, emps.comAddr);

	tmp = emps; //구조체 변수 복사
				//구조체 변수는 멤버들의 집합(변수)이므로 위의 방식으로 복사가 손쉽게 가능하다.
	printf("%s\t%d\t%.2f\t%s \n\n", tmp.name, tmp.salary, tmp.height, tmp.comAddr);

	return 0;
}
