//employess.c
#include <stdio.h>
#include <string.h>
#define EMP_SZ 30

/*
Ű����� ���� ����(names,20), ����(salary), ȸ���ּ�(comAddr,50)�� �Է¹ް� ����Ͻÿ�.
�̶� �ԷµǴ� �Ǽ��� ���� ���ϸ�, ������ "end" �̸� �Է��� �����ϰ�,
�Էµ� ������ ��°�, ���� ����� ���Ͽ� ����Ͻÿ�.
*/

int main()
{
	//����, �迭����
	char names[EMP_SZ][20], comAddr[EMP_SZ][50];
	int salary[EMP_SZ];
	int i, Cn, salTot=0, found;
	char s_name[20];
	
	for (i = 0; i < EMP_SZ; i++)//������ �Է�
	{
		printf("���� ? (�Է��շ�:end) ");
		gets(names[i]); //kim['\0], lee, han

		if (strcmp(names[i],"end") == 0)
			break;
		printf("���� ? ");
		scanf("%d%*c", &salary[i]); //1000[enter], 2000, 3000
		printf("ȸ���ּ� ? ");
		gets(comAddr[i]);  //seoul, busan, incheon
	}

	Cn = i;
	
	for (i = 0; i < Cn; i++)//������ ���
	{
		printf("%s, %d, %s \n", names[i], salary[i], comAddr[i]);
		salTot += salary[i];
	}
	printf("====================\n");
	printf("�������: %d \n", salTot / Cn);
	printf("====================\n");


	//�˻� �˰���
	while (1)
	{
		printf("\n�˻��� ���� ? (�˻�����:end) ");
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