#include <stdio.h>
#define EQ  "============"          //매크로 상수
#define MSG "인피니트헬스케어"      //매크로 상수
#define SUM(x,y) x+y                 //매크로 함수
int main()
{/*변수선언: 선언된 자료형의 크기만큼 메모리를 할당하고,
	컴파일러에게 자료형을 알린다.*/
	
	char ch;
	int num = 100; //변수 초기화

	double dnum;


	printf("c 언어의 자료형(DataType) \n");

	ch = 'A'; //ch = "A"; 문자열(2byte 할당받으며 C에서 문자열은 배열을 사용해야한다.
	num = 200;
	dnum = 1.5;
	const float PI = 3.141592F; // 변수를 상수화(반드시 초기화가 일어나야 함)
	//PI = 15.7;
	//A, 100, 1.500000
	printf("ch : %c, num : %d, dnum : %1f \n", ch, num, dnum);
	printf("PI : %f \n", PI);
	//printf("정수 :  % d, 문자 : % c \n", 100, 'Z');
	//printf("%d + %d = %d \n", 100, 200, 100 + 200);

	printf("%s \n", EQ);
	printf("%s \n", MSG);
	printf("합 : %d \n", SUM(100,300));


	return 0;
}