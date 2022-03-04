//variableScope.c
#include <stdio.h>

funcA(int age);

int salary = 37000000; //전역변수 (모든 함수에 공유)

int main()
{
	int age = 27;

	printf("main() age : %d,%p salary : %d,%p \n", age,&age,salary,&salary);
	funcA(age);
	printf("main() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary);
	funcB();
	printf("main() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary);

	funcD();
	funcD();
	funcD();

	return 0;
}

funcD()
{
	int sum1 = 1;		 //지역변수
	static int sum2 = 1; //정적변수 == 한번만 초기화하며 값을 유지시킨다.
	//									보통, 이 함수를 여러번 호출할 필요가 있을 때 이 함수를 벗어나도 변수값을 유지시키고 싶을때 씀

	printf("sum1: %d, sum2: %d \n", sum1++, sum2++);
}

funcA(int age) //지역변수는 함수가 호출될 때 할당받고 함수가 끝날때 삭제된다.
{
	printf("main() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary);
	age = 35;
	salary += 2000000;
}

funcB()
{
	int age = 7;
	int salary = 1000;//지역변수
	printf("main() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary);
}