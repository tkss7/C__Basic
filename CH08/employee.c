//employee.c
#include<stdio.h>
#include<string.h>
#define EMP_SZ 30
/*
키보드로 부터 성명(names,20), 월급(salary), 회사주소(comAddr,50)을 입력받아 출력하시오.
이때 입력되는 건수는 알지 못하며, 성명이 "end" 이면 입력을 종료하고, 
입력된 데이터 출력과 , 월급 평균을 구하여 출력하시오.
숫자형 배열의 경우
1차원 주소 = &sum[i], 1차원 printf = sum[i]
2차원 주소 = sum[i],  2차원 printf = sum[i][j]
strstr(포함된 것 찾을 떄 사용)
strstr("서울시 강남구","부산")
*/

int main()
{
	//1.변수나 배열을 선언
	char names[EMP_SZ][20];
	int i=0,salary[EMP_SZ];
	int Cn=0, salTot = 0, found;
	char comAddr[EMP_SZ][50];
	char s_name[20];

	//2. 데이터 입력
	
		for (i = 0; i < EMP_SZ; i++)
	{
		printf("이름을 입력하시오. (입력 종료 : end):");
		gets(names[i]);
		if (strcmp(names[i],"end") == 0)
			break;
		printf("월급을 입력하시오. :");
		scanf("%d%*c", &salary[i]);
		printf("회사주소를 입력하시오. :");
		gets(comAddr[i]);
		Cn++;
	}
	
	/*
	do{
		i++;
		printf("이름을 입력하시오. (입력 종료 : end):");
		gets(names[i]);
		if (strcmp(names[i],"end")==0)
			break;
		printf("월급을 입력하시오. :");
		scanf("%d%*c", &salary[i]);
		printf("회사주소를 입력하시오. :");
		gets(comAddr[i]);
	} while (i < EMP_SZ);
	*/

	
	//3. 출력
		for (i = 0; i <Cn; i++)
		{
			printf(" 성명 : %s, 월급 : %d, 회사주소 : %s \n", names[i], salary[i], comAddr[i]);
			//월급 합
			salTot += salary[i];
		}
		//월급평균
		printf("==============================================\n");
		printf("월급 평균 : %d \n", salTot / Cn);
		printf("==============================================\n");
	for (i = 0; i < Cn; i++)
		printf("%p	", names[i]);


	//검색 알고리즘
	while (1)
	{
		printf("\n검색할 성명 ? ");
		gets(s_name);
		if (strcmp(s_name, "end") == 0)
			break;
		found = 1;
		for (i = 0; i < Cn; i++)
		{
			if (strcmp(names[i], s_name) == 0) // 문자열 같은거 표시함!!! 중요!!!!
			{
				found = 0;
				printf("%s, %d, %s \n", names[i], salary[i], comAddr[i]);
				//break; //동명이인이 있을 수 있어서 못주지만 만약 사업번호 같은거라면 break를 주면 됨
			}
		}
		if (found) //참이면(1)
			printf("%s, Not found!!! \n", s_name);

	}//while(1) end

	return 0;
}
