//fuction_test.c
#include<stdio.h>

//rety-type 함수명(param list) ==> (반환할 타입) 함수명 (받는 변수 및 타입)
//함수는 어떤 일을 처리하는 논리적인 코드들의 집합

//함수사용 : 1.함수정의, 2.함수호출, 3.함수선언(C는 선택사항, C++은 필수사항)

//rety-type : 부모함수에게 반환할 자료형을 주는것, 리턴타입의 디폴트 값은 int임
//void는 권장사항
////param list : 부모함수의 실인수를 저장할 변수리스트
//rety - type 함수명(param list) ==> (반환할 타입) 함수명(받는 변수 및 타입)
//
//return : 나를 부른 부모함수에게 즉시 복귀함 ==> 인터럽트
//
//return value : 함수명 앞에 리턴벨류 타입을 줘야함!!!!, 무조건 1개값만 반환가능함
//
//부모함수가 자식함수에게 받는 인자는 30개까지 가능함
//
//
//1.함수정의 : 함수를 만듦
//3.함수선언 : 헤더를 복사해서 메인함수 위에 붙이고 세미콜론을 붙임
//붙이는 이유 : //함수선언은 컴파일러에게 함수의 원형(형식)을 알린다.
//		 //선언을 생략하면 컴파일러는 함수의 모든 인자를 int로 가정한다.
//-- > 선언 안하면 int인줄 아는데 void 같은게나오면 오류인줄알고 경고표시를 함
//
//
//메인함수 위에 함수정의를 하면 함수선언을 생략해도 됨
//라이브러리 함수는 헤더파일 쓸 것을 권장한다.



int funcD(); //3.함수 선언부
//함수선언은 컴파일러에게 함수의 원형(형식)을 알린다.
//선언을 생략하면 컴파일러는 함수의 모든 인자를 int로 가정한다
void funcA();
void funcB(int salary);
float funcE(int salTot, float rate);

int main() //자동실행
{
	int age = 20;
	int salary = 3500000;
	int sudang;
	float tax;
;
	printf("main() start. \n");
	funcA(); //무인수
	funcB(salary); //전달인수, 실인수
	sudang = funcD(); //2.함수 호출부

	tax = funcE(salary + sudang, 0.03);
	printf("main() 세금 : %f \n", tax);

	printf("main() 수당 : %d \n", sudang);
	printf("main() end. \n");



	return 0;
}

float funcE(int salTot, float rate)
{
	//printf("funcE() %d, %f \n", salTot, rate);
	//printf("funcE() 세금: %f \n", salTot* rate);
	return salTot * rate;
}
//1.함수 정의부
int funcD() //함수 헤더
{			//함수 바디
	int over_time = 15;
	//printf("funD() 야근수당 : %d", over_time * 35000);
	return over_time * 35000; //return value : 함수명 앞에 리턴벨류 타입을 줘야함!!!!
}

void funcA()
{
	printf("funcA() start. \n");
	printf("funcA() end. \n");
	return; // 나를 부른 부모함수에게 즉시 복귀함 ==> 인터럽트
}

//자료형과 갯수가 맞아야한다
void funcB(int salary) //매개변수, 가인수
{
	printf("funcB start. \n");
	printf("salary : %d \n", salary);
	printf("funcB end. \n");
}