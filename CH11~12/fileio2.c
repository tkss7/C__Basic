//fileio2.c
#include<stdio.h>
#include<stdlib.h>

/*
	fgetc() : 스트림에서 문자를 읽어 버퍼에 복사함
	fputc() : fp와 관련된 파일에 버퍼가 가리키는 문자를 출력함

	C:\> ch11~12.exe ../data2.txt ../data2.bak
		../ => 나의 상위(부모)방에

	ch11~12.exe\0   (.exe는 붙이든 안붙이든 상관없음)
	../data2.txt\0
	../data2.bak\0
*/

int main(int argc, char *argv[])
{
	char ch;
	FILE* in, *out; //open한 파일정보를 담는 구조체, 파일 정보를 못 받으면 NULL값이므로 에러

	//Save
	in = fopen(argv[1], "rt");//wt == write txt , t 는 디폴트 값이라 없어도 ㄱㅊ
								  //at == append txt : 이전 내용 뒤에 추가
	if (in == NULL) //디스크 용량없으면 실패
	{
		printf("in stream error. \n");
		exit(1); //프로그램 즉시종료
	}

	out = fopen(argv[2], "wt");//wt == write txt , t 는 디폴트 값이라 없어도 ㄱㅊ
							  //at == append txt : 이전 내용 뒤에 추가
	if (out == NULL) //디스크 용량없으면 실패
	{
		printf("out stream error. \n");
		exit(1); //프로그램 즉시종료
	}

	//파일복사
	while ((ch = fgetc(in)) != EOF)
	{
		fputc(ch, out);
	}
	
	fclose(in);
	fclose(out);

	printf("data1.bak 파일 복사. \n");

	return 0;
}
