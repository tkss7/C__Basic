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
	struct EMPLOYEE *ptr; //����ü ������ ����

	ptr = (struct EMPLOYEE*)malloc(sizeof(struct EMPLOYEE));
	if (ptr == NULL)
	{
		perror("Error : ");
		exit(1);
	}

	printf("���� : ? ");
	gets(ptr->name);
	printf("���� : ? ");
	scanf("%d",&ptr->salary);
	printf("Ű(����) ? ");
	scanf("%f%*c",&ptr->height);
	printf("ȸ���ּ� ? ");
	gets(ptr->comAddr);

	printf("%s, %d, %.2f, %s \n",ptr->name,ptr->salary,ptr->height,ptr->comAddr);

	free(ptr); //���� ����� ���ϸ� ��Ÿ�� ������
	ptr = NULL;
	return 0;
}