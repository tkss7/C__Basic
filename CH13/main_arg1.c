//main_arg1.c
#include <stdio.h>

/*
	명령어 라인 인수 : 명령 프롬프트에서 실행파일 뒤에 쓰는 인수 리스트

	c:\> ch13.exe sample 100 // 인자 3개 (ch13.exe , sample , 100 ) 프로그램의 이름이 하나의 인자로 처리됨
	->  7000 ch13\0 //700번대 == 주소를 예시로 든 것
		7100 sample\0
		7200 100\0
		//공백도 하나의 문자로 취급하고 싶다면? ""로 묶으면 됨 ex)"in tel"
		//ch13.exe sample 100 입력하면	argc : 3
										00B93EE8: ch13
										00B93EED: sample test
										00B93EF9: a.txt              이 나옴
	부모 : 운영체제
	자식 : main()
	main(int argc char *argv[]) //먼저 스타트

	argc : 명령어 라인 인자의 수
	argv : 문자열의 주소(포인터배열)

	명령프롬프트에서 들어오는 문자는 공백마다 문자열로 저장

	이걸 알면 인자를 다른파일에 복사할수 있다?
*/

int main(int argc, char *argv[])
{
	int i;

	printf("argc : %d \n", argc);
	for (i = 0; i < argc; i++)
		printf("%p: %s\n", argv[i], argv[i]);

	return 0;
}