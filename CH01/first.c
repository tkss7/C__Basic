#include <stdio.h> //헤더파일 --> 입출력함수 호출정보(컴파일러에게 정보를 제공)
//# : 선행처리 지시문( ; 으로 끝나지 않는다)
//함수들의 모임

int main()  //진입점 함수(함수 중 main()가 자동으로 실행된다.)
{
	printf("main() start. \n"); //함수호출(라이브러리 함수)
	funcA(); //함수호출
	printf("main() end. \n");
	return 0;
}

funcA() //호출될 떄 실행
{
	printf("funcA() called. \n");

}