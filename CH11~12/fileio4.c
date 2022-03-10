//fileio4.c
#include<stdio.h>
#include<stdlib.h>

/*
EOF == 1byte
*/

int main()
{
	char tmp[80];
	FILE* fp; //open한 파일정보를 담는 구조체, 파일 정보를 못 받으면 NULL값이므로 에러

	//Save
	fp = fopen("C:\\temp_C\\datatype1.c", "rt");// "//"는 백슬래시 하나 나타내기 위해 두개씀 ex) \n, \t 
	if (fp == NULL) //디스크 용량없으면 실패, 못불러오면 실패
	{
		printf("file open error. \n");
		exit(1); //프로그램 즉시종료
	}

	while (1)
	{
		if (fgets(tmp, 80, fp)) //디스크에 있는 내용을 줄단위로 읽고싶을떄 사용함
								//80바이트 안에 누라인을 만나면 거기까지만 읽음
								//80바이트가 넘어도 80바이트 까지만 읽음
								//파일의 끝에 도달하면 NULL을 반환함
			printf("%s ", tmp);
		else
			break;


	}

	fclose(fp);

	return 0;
}