//gets_s.c

#include<stdio.h>
#include<conio.h> //비출력 입출력 헤더파일

int main()
{
	char name[20];
	char comAddr[50];

	printf("성명 ? ");
	scanf_s("%s%*c",name, 20); //자기가 필요한 만큼 가져가고 남은건 입력버퍼에 남겨놓음
	//gets_s(name, 20);

	printf("회사주소 ? ");
	gets_s(comAddr, 30); // 넘으면 프로세스 중지시킴

	printf("%s, %s \n", name, comAddr);
}