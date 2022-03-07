//employess.c
#include <stdio.h>
#include <string.h>
#define EMP_SZ 30

/*
키보드로 부터 성명(names,20), 월급(salary), 회사주소(comAddr,50)을 입력받고 출력하시오.
이때 입력되는 건수는 알지 못하며, 성명이 "end" 이면 입력을 종료하고,
입력된 데이터 출력과, 월급 평균을 구하여 출력하시오.
*/

int main()
{
	//변수, 배열선언
	char names[EMP_SZ][20], comAddr[EMP_SZ][50];
	int salary[EMP_SZ];
	int i, Cn, salTot=0, found;
	char s_name[20];
	
	for (i = 0; i < EMP_SZ; i++)//데이터 입력
	{
		printf("성명 ? (입력죵료:end) ");
		gets(names[i]); //kim['\0], lee, han

		if (strcmp(names[i],"end") == 0)
			break;
		printf("월급 ? ");
		scanf("%d%*c", &salary[i]); //1000[enter], 2000, 3000
		printf("회사주소 ? ");
		gets(comAddr[i]);  //seoul, busan, incheon
	}

	Cn = i;
	
	for (i = 0; i < Cn; i++)//데이터 출력
	{
		printf("%s, %d, %s \n", names[i], salary[i], comAddr[i]);
		salTot += salary[i];
	}
	printf("====================\n");
	printf("월급평균: %d \n", salTot / Cn);
	printf("====================\n");


	//검색 알고리즘
	while (1)
	{
		printf("\n검색할 성명 ? (검색종료:end) ");
		gets(s_name);   //lee,kim, sun ... end
		if (strcmp(s_name, "end") == 0)
			break;

		found = 1;
		for (i = 0; i < Cn; i++) 
		{
			if (strcmp(names[i], s_name) == 0)
			{
				found = 0;
				printf("%s, %d, %s \n", names[i], salary[i], comAddr[i]);
                //break; 
			}
		}

		if (found)
			printf("%s, Not found!!! \n", s_name);

	} //while (1) end

	return 0;
}