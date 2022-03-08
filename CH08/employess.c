//employess.c
#include <stdio.h>
#include <string.h>
#define EMP_SZ 30

/*
Ű����� ���� ����(names,20), ����(salary), ȸ���ּ�(comAddr,50)�� �Է¹ް� ����Ͻÿ�.
�̶� �ԷµǴ� �Ǽ��� ���� ���ϸ�, ������ "end" �̸� �Է��� �����ϰ�,
�Էµ� ������ ��°�, ���� ����� ���Ͽ� ����Ͻÿ�.
*/
char names[EMP_SZ][20], comAddr[EMP_SZ][50];
int salary[EMP_SZ], Cn=0 ;//�������� ���°� �������� ó��

int main()
{
	int choice, stop = 1;

	while (stop)
	{

		printf("1. ������� �Է� \n");
		printf("2. ������� ��� \n");
		printf("3. ������� �˻� \n");
		printf("4. ������� ���� \n");
		printf("Select ? (1~4) ");
		scanf("%d%*c", &choice);

		switch (choice) //�ش�Ǵ� ��ȣ�� ������ �ٽ� �θ�
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

emp_input()//������ �Է�
{
	int i;
	int choice, stop = 1;
	

	
	for (i = Cn; i < EMP_SZ; i++)
	{
		printf("���� ? (�Է��շ�:end) ");
		gets(names[i]); //kim['\0], lee, han

		if (strcmp(names[i], "end") == 0)
			break;
		printf("���� ? ");
		scanf("%d%*c", &salary[i]); //1000[enter], 2000, 3000
		printf("ȸ���ּ� ? ");
		gets(comAddr[i]);  //seoul, busan, incheon
	}

	Cn = i;
}//emp_input() end

emp_output()//������ ���
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
		printf("�������: %d \n", salTot / Cn);
		printf("====================\n");
	}


}//emp_output() end

emp_find()//�˻� �˰���
{
	int i,found;
	char s_name[20];

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
}//emp_find() end
