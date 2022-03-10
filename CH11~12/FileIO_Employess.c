//employess.c
#include <stdio.h>
#include <string.h>
#define EMP_SZ 30

/*
Ű����� ���� ����(names,20), ����(salary), ȸ���ּ�(comAddr,50)�� �Է¹ް� ����Ͻÿ�.
�̶� �ԷµǴ� �Ǽ��� ���� ���ϸ�, ������ "end" �̸� �Է��� �����ϰ�,
�Էµ� ������ ��°�, ���� ����� ���Ͽ� ����Ͻÿ�.

���̺귯���Լ��� ����,���п��θ� �˷��ִ� perror()�Լ��� �ִ�. 
*/
char names[EMP_SZ][20], comAddr[EMP_SZ][50];
int salary[EMP_SZ], Cn=0 ;//�������� ���°� �������� ó��

emp_save();
emp_input();
emp_output();
emp_find();
emp_load();

int main()
{
	int choice, stop = 1;

	emp_load();//������� �޸� ����

	while (stop)
	{

		printf("1. ������� �Է� \n");
		printf("2. ������� ��� \n");
		printf("3. ������� �˻� \n");
		printf("4. ������� ���� \n");
		printf("5. ������� ���� \n");
		printf("Select ? (1~5) ");
		scanf("%d%*c", &choice);

		switch (choice) //�ش�Ǵ� ��ȣ�� ������ �ٽ� �θ�
		{
		case 1: emp_input();
			break;
		case 2: emp_output();
			break;
		case 3: emp_find();
			break;
		case 4: emp_save();
			break;
		case 5:stop = 0;
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
	
	printf("%d %d", sizeof(names), sizeof(names[0]));
	if (Cn)
	{
		printf("====================\n");
		printf("�������: %d \n", salTot / Cn);
		printf("====================\n");
		printf("%s", names);
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

emp_save()
{
	FILE* fp;

	fp = fopen("emps.dat", "wb");
	if (fp == NULL)
	{
		//perror(""); =>""������ �����ѹ��� �ش��ϴ� �޽��� ������ �˾Ƽ� �ٿ��ش�.( ������ ��ġ�� �� �ֵ���)
		perror("Error : ");
		exit(1);
	}
	fwrite(&Cn, sizeof(Cn), 1, fp);
	fwrite(names, sizeof(names[1]), Cn, fp);
	fwrite(salary, sizeof(salary[1]), Cn, fp);
	fwrite(comAddr, sizeof(comAddr[1]), Cn, fp);
	fclose(fp);


}//emp_save() end

emp_load()
{
	FILE* fp;
	fp = fopen("emps.dat", "rb");
	if (fp == NULL)
	{
		printf("file load error. \n");
		return;
	}
	fread(&Cn, sizeof(Cn), 1, fp);
	for (int i = 0; i < Cn; i++)
	{
		fread(names[i], sizeof(names[1]), 1, fp); // nams[i]�� �ּ� �Է��ϸ� ������ ������ �ִ� ����Ʈ�� 20byte�� �ִ��
													// ���� 1 ��� Cn���� ������ 20�� ������ 600�� �����Ƿ� ������.
	}
	fread(salary, sizeof(salary[1]), Cn, fp); //���� Cn���� �ѹ��� �������� �����ּҸ� names�� �Ͽ� 600byte�� ������ �����ؾ��Ѵ�.
	fread(comAddr, sizeof(comAddr[1]), Cn, fp);


	fclose(fp);
	printf("emps.dat load.\n");
}//emp_load() end