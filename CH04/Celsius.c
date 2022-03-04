#include <stdio.h>
#include <ctype.h>
/*

조건(3항) 연산자
형식 : 조건식 ? 식1 : 식2
형식 : 조건식 ? 식1 : 식2

컴파일 : 고급언어를 기계어로 바꾸는 과정

링킹 : 사용자가 생성한 오브젝트파일들과 라이브러리함수를 결합하여 실행파일생성

전처리작업 : 전처리지시자가 전처리문을 해석하여 전처리 후 코드를 만들어냄
*/
int main(){

	char celsius;
	int tmp, out;

	printf("화씨이면 F, 섭씨이면 C 입력 : ");
	scanf("%c", &celsius);
	celsius = toupper(celsius);

	printf("%s 온도 ? ", celsius=='F' ? "화씨" : "섭씨" );
	scanf("%d", &tmp);

	out = celsius == 'F' ? (tmp - 32)/1.8 : (tmp * 1.8) + 32;

	printf("\n%s를 %s로 변환 : %d \n", celsius=='F'?"화씨":"섭씨", celsius == 'F' ? "섭씨" : "화씨",out);

	return 0;
}