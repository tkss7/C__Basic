//employess.c
#include <stdio.h>
#include <string.h>
#define EMP_SZ 30

/*
키보드로 부터 성명(names,20), 월급(salary), 회사주소(comAddr,50)을 입력받고 출력하시오.
이때 입력되는 건수는 알지 못하며, 성명이 "end" 이면 입력을 종료하고,
입력된 데이터 출력과, 월급 평균을 구하여 출력하시오.
*/
char names[EMP_SZ][20], comAddr[EMP_SZ][50];
int salary[EMP_SZ], Cn=0 ;//공통으로 쓰는건 전역변수 처리

int main()
{
	int choice, stop = 1;

	while (stop)
	{

		printf("1. 사원정보 입력 \n");
		printf("2. 사원정보 출력 \n");
		printf("3. 사원정보 검색 \n");
		printf("4. 사원정보 종료 \n");
		printf("Select ? (1~4) ");
		scanf("%d%*c", &choice);

		switch (choice) //해당되는 번호가 없으면 다시 부름
		{
		case 1: emp_input();
			break;
		case 2: emp_output();
			break;
		case 3: emp_find();
			break;
		case 4: stop = 0;
			break;
		}
		//while (getchar() != '\n');
	}//while(1)

	

	
	return 0;
}// main() end

emp_input()//데이터 입력
{
	int i;
	int choice, stop = 1;
	

	
	for (i = Cn; i < EMP_SZ; i++)
	{
		printf("성명 ? (입력죵료:end) ");
		gets(names[i]); //kim['\0], lee, han

		if (strcmp(names[i], "end") == 0)
			break;
		printf("월급 ? ");
		scanf("%d%*c", &salary[i]); //1000[enter], 2000, 3000
		printf("회사주소 ? ");
		gets(comAddr[i]);  //seoul, busan, incheon
	}

	Cn = i;
}//emp_input() end

emp_output()//데이터 출력
{
	int i, salTot = 0;

	for (i = 0; i < Cn; i++)
	{
		printf("%s, %d, %s \n", names[i], salary[i], comAddr[i]);
		salTot += salary[i];
	}
	if (Cn)
	{
		printf("====================\n");
		printf("월급평균: %d \n", salTot / Cn);
		printf("====================\n");
	}


}//emp_output() end

emp_find()//검색 알고리즘
{
	int i,found;
	char s_name[20];

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
}//emp_find() end
