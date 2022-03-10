//fileio3.c
#include<stdio.h>
#include<stdlib.h>

/*
	fputs(저장된 문자열의 주소,저장할 파일 스트림 주소) : 시작주소부터 NULL까지를 찾아 집어넣는다]
	fgets(저장할 주소,버퍼 크기, 저장한 파일스트림 주소)
*/

int main()
{
	char str[20] = "kingdom", tmp[20];
	FILE* fp; //open한 파일정보를 담는 구조체, 파일 정보를 못 받으면 NULL값이므로 에러
/*
	//Save
	fp = fopen("data2.txt", "wt");//wt == write txt , t 는 디폴트 값이라 없어도 ㄱㅊ
								  //at == append txt : 이전 내용 뒤에 추가
	if (fp == NULL) //디스크 용량없으면 실패
	{
		printf("file open error. \n");
		exit(1); //프로그램 즉시종료
	}
	fputs(str, fp);

	fclose(fp);
*/
	//Load
	fp = fopen("data2.txt", "rt");//wt == write txt , t 는 디폴트 값이라 없어도 ㄱㅊ
								  //at == append txt : 이전 내용 뒤에 추가
	if (fp == NULL) //디스크 용량없으면 실패
	{
		printf("file open error. \n");
		exit(1); //프로그램 즉시종료
	}
	fgets(tmp,20, fp);

	fclose(fp);

	printf("tmp : %s \n", tmp);

	return 0;
}
