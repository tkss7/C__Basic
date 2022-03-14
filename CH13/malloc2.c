//malloc2.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct EMPLOYEE {
	char name[20];
	int salary;
	float height;
	char comAddr[40];
};

int main()
{
	struct EMPLOYEE *ptr; //구조체 포인터 변수

	ptr = (struct EMPLOYEE*)malloc(sizeof(struct EMPLOYEE));
	if (ptr == NULL)
	{
		perror("Error : ");
		exit(1);
	}

	printf("성명 : ? ");
	gets(ptr->name);
	printf("월급 : ? ");
	scanf("%d",&ptr->salary);
	printf("키(신장) ? ");
	scanf("%f%*c",&ptr->height);
	printf("회사주소 ? ");
	gets(ptr->comAddr);

	printf("%s, %d, %.2f, %s \n",ptr->name,ptr->salary,ptr->height,ptr->comAddr);

	free(ptr); //해제 제대로 안하면 런타임 오류뜸
	ptr = NULL;
	return 0;
}