//struct2.c
#include<stdio.h>
#include<string.h>
/*
* 다 떠나서 대괄호가 하나면 열 == 데이터
*			대괄호가 두개면 행 == 주소
* 
* 구조체변수.구조체 멤버
*/
#define EMP_SZ 30
int main()
{
	int i, Cn = 0;
	typedef struct EMPLOYEE
	{
		char name[20]; 
		int salary;
		float height;
		char comAddr[50];
	}EMP;

	struct EMPLOYEE emps[EMP_SZ],*ptr ; //1차원 배열이므로 열 임(==주소가 아닌 데이터)

	for (i = 0; i < EMP_SZ; i++)
	{
		printf("성명 ? (입력종료 : end)");
		gets(emps[i].name);
		//if(strcmp(emps[i].name,"end")==0)
		if (!strcmp(emps[i].name, "end"))
		{
			//Cn = i; // 사이즈 다 채우면 이 조건을 못만나므로 여기보단
			break;
		}
		//Cn++; //이렇게 해도 되지만 쓸데없이 연산량이 많아져서 성능에 문제가 생김

		printf("월급 ? ");
		scanf("%d%*c", &emps[i].salary);
		printf("키(신장) ? ");
		scanf("%f%*c", &emps[i].height);
		printf("회사주소 ? ");
		gets(emps[i].comAddr);
	}
	Cn = i; //여기가 맞다.
	ptr = emps;

	while (1)
	{
		if (!strcmp(ptr->name, "end"))
			break;
		printf("%s\t%d\t%.2f\t%s \n\n", ptr->name, ptr->salary, ptr->height, ptr->comAddr);
		//포인터의 증가는 포인터의 자료형의 크기만큼 증가한다.
		ptr++;
	}

	


	return 0;
}
