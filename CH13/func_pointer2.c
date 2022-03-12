//func_pointer2.c
#include<stdio.h>

/*
	함수 포인터를 typedef로 선언하면 함수 포인터가 아닌 함수포인터 자료형이 된다.
	void funCacl(int (*fp5)(int,int)) //*!!!!!!!함수의 주소가 실인수로 들어올땐 반드시 함수 포인터 변수가 필요함!!!!!*
	int (*fp1)(int, int); //많이 쓴다면 복잡하므로 typedef로 재정의해서 쓰기도 한다
	일반 어플리케이션은 수많은 반복 아니면 포인터와 안쓴것과의 차이가 거의 없지만
	임베디드에서는 성능에 영향을 많이 끼침
*/

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

typedef int (*FP)(int, int); //함수포인터 자료형 선언  ->이렇게 선언하면 FP가 
//함수 포인터를 typedef로 선언하면 함수 포인터가 아닌 함수포인터 자료형이 된다.


//void funCacl(int (*fp5)(int,int)) //*!!!!!!!함수의 주소가 실인수로 들어올땐 반드시 함수 포인터 변수가 필요함!!!!!*
void funCacl(FP fp5)
{
	printf("fanCal() : %d \n", (*fp5)(400, 30));
}

int main()
{
	int ret;

	ret = add(100, 30);
	printf("add() : %d \n", ret);

	//1. 함수 포인터 변수를 사용하여 sub함수를 호출
	int (*fp1)(int, int); //많이 쓴다면 복잡하므로 typedef로 재정의해서 쓰기도 한다
	fp1 = sub;
	ret = (*fp1)(100, 30);
	printf("sub() : %d\n", ret);

	//2. 재정의된 함수포인터 자료형으로 함수포인터 변수선언
	FP fp2;
	FP fp3;

	fp2 = add;
	fp3 = sub;

	printf("add() : %d \n", (*fp2)(200, 30));
	printf("sub() : %d \n", (*fp3)(200, 30));

	//3. 재정의된 함수포인터 자료형으로 함수포인터 배열 선언
	FP fp4[5]; //함수포인터 배열 FP 형태의 것만 받음
	fp4[0] = add;
	fp4[1] = sub;

	printf("add() : %d \n", (*fp4[0])(200, 30));
	printf("sub() : %d \n", (*fp4[1])(200, 30));

	//4. 함수를 호출할 때 함수 주소를 실인수로 전달
	funCacl(add);
	funCacl(sub);

	return 0;
}
