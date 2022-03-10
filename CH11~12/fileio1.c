//fileio1.c
#include<stdio.h>
#include<stdlib.h>// exit 함수의 원형이 있음
/*
* 더블코트 " " = 어딘가 저장된 주소를 의미함
* 
운영체제는 부팅하게 되면 표준스트림을 제공해줌
stdin : 표준 입력장치(대부분 키보드)
stdout : 표준 출력장치(터미널 = 모니터)
stderr : 표준 에러출력장치(터미널 = 모니터)
스트림 : 프로세스와 외부장치간의 논리적인 연결

C언어에서는 표준스트림 장치를 이용하는 함수를 제공한다
-> scanf() : printf()
getchar(), putchar()
get(), puts()
disk에서 프로세스 : load
프로세스에서 disk : save
== file I/O
모니터 키보드가 아닌 다른 장치로 주고받을 땐 운영체제가 책임 안져줌 ex) disk
주고 받기위한 준비동작이 필요함

1. file open(장치 연결)(스트림 연결) == fopen()
2. R/W 함수를 이용해서 save, load를 해줘야 함
3. 다 끝내면 file close 해줘야 함 ( 스트림 닫음) == fclose()

FILE = open한 파일정보를 담는 구조체
*/

// 메인함수의 부모는 OS(운영체제)임
// O/S => 유닉스 기반의 운영체제는 항상 프로세스의 종료코드 (exit code(0 : 성공, not 0 : 실패)를 요구함
// 괄호안의 1,2,3은 실패한 함수의 구분용도로 개발자들이 사용하기도 함
int main()
{
	char ch;
	FILE* fp; //open한 파일정보를 담는 구조체, 파일 정보를 못 받으면 NULL값이므로 에러
	
	//Save
	fp = fopen("data1.txt", "at");//wt == write txt , t 는 디폴트 값이라 없어도 ㄱㅊ
								  //at == append txt : 이전 내용 뒤에 추가
	if (fp == NULL) //디스크 용량없으면 실패
	{
		printf("file open error. \n");
		exit(1); //프로그램 즉시종료
	}

	puts("stdin -> disk "); //키보드로 입력한걸 모니터로 보여줄꺼야
	while ((ch = fgetc(stdin)) != EOF) //fgetc = 한문자를 읽음
	{ //키보드로 한문자씩 입력받아 출력함
		fputc(ch, fp);//Ctrl + Z를 누르면 입력 종료, 입력받아 file에 저장
		fputc(ch, stdout);// stdout == 터미널 창 ==> 입력받아 터미널 창에 출력
	} 

	fclose(fp);
	

	//Load
	fp = fopen("data1.txt", "rt");//rt == read txt , 성공하면 파일 맨 첫글자에 커서가 가있음
	if (fp == NULL) //디스크 용량없으면 실패
	{
		printf("file open error. \n");
		exit(1); //프로그램 즉시종료
	}

	puts("stdin -> disk "); //키보드로 입력한걸 모니터로 보여줄꺼야
	while ((ch = fgetc(fp)) != EOF) //fgetc = 한문자를 읽음
	{ //키보드로 한문자씩 입력받아 출력함
		fputc(ch, stdout); //파일은 맨 마지막에 1byte로 EOF 정보를 갖고있음  
	} // stdout == 터미널 창

	fclose(fp);


	return 0;
}