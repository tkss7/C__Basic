//408p_10_05.c
#include<stdio.h>
#include<string.h>

/*
	while (*(from+i))
	{
		//*from++; // ==> *from = *(from+1);
		//*(from + i); // 굳이 쓰자면 이 표현이 맞음
		//from++; //from이 문자열 상수가 아니므로 주소값이 연속되어 할당받지않는다.
				  //tmp[]의 시작주소가 4byte 증가하면 뭔지도 모르는 곳으로 가버린다.
		i++;
	}
*/

void Reverse_func(char *to, char* from);

int main()
{
	//1. 변수 선언
	char str[20], re_str[20];


	//2. 실행 및 출력
	printf("Input String ? ");
	gets(str);
	Reverse_func(re_str,str);


	return 0;
}

void Reverse_func(char *to, char *from)
{
	int i = 0, cn = 0;

	while (*(from+i))
	{
		i++;
	}
	
	cn = i;
	i = i - 1; // '\0'값 제거
	printf("\n");
	while (i>=0)
	{
		*to = *(from+i);
		printf("%c ", *to);
		i--,to++;
	}
	printf("\n문자열 크기 : %d", cn);
	
}

