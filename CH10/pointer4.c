//poiner4.c
#include<stdio.h>

/*
	salCal(salary[0]); //call by value : 실인수의 값이 매개변수에 전달됨
						//-> 부모가 자식에게 값을 넘김 => 한계가 분명히 존재함

	salCal(salary); //call by reference : 메모리의 시작주소가 매개변수에 복사됨
						//-> 부모함수의 실인수에 영향을 미칠 수 있음

?. 그러면 전역변수 or static중 뭐쓰는게 낫나요?
전역변수는 누구나 바꿀 수 있다.
static은 비교적 적은 범위에서 바꿀 수 있다. == 보안적인 문제에서 나음
*/
int* funcA();
void funcB();
void funcD();
void salCal(int* tmp, int size);
int main()
{
	int salary[] = { 1500,3000,4500,7000,2700,7800,9000,3500 },i;
	int size;

	size = sizeof(salary) / sizeof(salary[0]);

	salCal(salary,size); //call by reference : 메모리의 시작주소가 매개변수에 복사됨
					//-> 부모함수의 실인수에 영향을 미칠 수 있음

	int* sudang;
	sudang = funcA();
	printf("main() 수당 : %d \n", *sudang);

	printf("%d \n", salary[0]);

	funcB();
	funcD();
	return 0;
}

int *funcA()
{
	static int su;
	printf("수당 ? ");
	scanf("%d", &su); //300000

	return &su; //원래는 지역변수므로 함수를 나갈 때 소멸됨
}

void funcB()
{
	const float PI = 3.14159F; //변수를 상수화

	int n1 = 100, n2 = 200;

	int* p1 = &n1;
	*p1 = 150;
	printf("funcB() n1 : %d \n", n1); //150

	const int* p2 = &n2; //포인터 상수화
	//*p2 = 250; //p2가 참조하는 데이터는 수정 불가능
	printf("funcB() n1 : %d \n", n2); //200

}

void funcD()
{
	char* p1 = "multi campus!!!";

	//문자열 상수 포인터 = 문자열 상수를 반환한 주소값을 받음 == 문자열을 변경할수 없다 -=> 상수이기 때문.
	//p1 = "Hello World !!!"; //문자열 상수를 반환한 주소값을 받음
	printf("p1: %p, %s \n",p1, p1);
}
//월급평균을 계산하여 출력
void salCal(int *tmp,int size)
//salCal(int tmp[9], int size)
//salCal(int tmp[], int size)
{
	int i, salTot = 0;
	printf("salCal() : %p, %d \n", tmp,sizeof(tmp));

	for (i = 0; i < size; i++)
	{
		printf("%d, ", *(tmp + i)); // *(tmp+i) == *(tmp++)
		salTot += *(tmp + i);
	}
	printf("\n평균 : %f \n", (float)salTot / size);

	printf("\n");
}