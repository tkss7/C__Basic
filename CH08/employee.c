//employee.c
#include<stdio.h>
#include<string.h>
#define EMP_SZ 30
/*
Ű����� ���� ����(names,20), ����(salary), ȸ���ּ�(comAddr,50)�� �Է¹޾� ����Ͻÿ�.
�̶� �ԷµǴ� �Ǽ��� ���� ���ϸ�, ������ "end" �̸� �Է��� �����ϰ�, 
�Էµ� ������ ��°� , ���� ����� ���Ͽ� ����Ͻÿ�.
������ �迭�� ���
1���� �ּ� = &sum[i], 1���� printf = sum[i]
2���� �ּ� = sum[i],  2���� printf = sum[i][j]
strstr(���Ե� �� ã�� �� ���)
strstr("����� ������","�λ�")
*/

int main()
{
	//1.������ �迭�� ����
	char names[EMP_SZ][20];
	int i=0,salary[EMP_SZ];
	int Cn=0, salTot = 0, found;
	char comAddr[EMP_SZ][50];
	char s_name[20];

	//2. ������ �Է�
	
		for (i = 0; i < EMP_SZ; i++)
	{
		printf("�̸��� �Է��Ͻÿ�. (�Է� ���� : end):");
		gets(names[i]);
		if (strcmp(names[i],"end") == 0)
			break;
		printf("������ �Է��Ͻÿ�. :");
		scanf("%d%*c", &salary[i]);
		printf("ȸ���ּҸ� �Է��Ͻÿ�. :");
		gets(comAddr[i]);
		Cn++;
	}
	
	/*
	do{
		i++;
		printf("�̸��� �Է��Ͻÿ�. (�Է� ���� : end):");
		gets(names[i]);
		if (strcmp(names[i],"end")==0)
			break;
		printf("������ �Է��Ͻÿ�. :");
		scanf("%d%*c", &salary[i]);
		printf("ȸ���ּҸ� �Է��Ͻÿ�. :");
		gets(comAddr[i]);
	} while (i < EMP_SZ);
	*/

	
	//3. ���
		for (i = 0; i <Cn; i++)
		{
			printf(" ���� : %s, ���� : %d, ȸ���ּ� : %s \n", names[i], salary[i], comAddr[i]);
			//���� ��
			salTot += salary[i];
		}
		//�������
		printf("==============================================\n");
		printf("���� ��� : %d \n", salTot / Cn);
		printf("==============================================\n");
	for (i = 0; i < Cn; i++)
		printf("%p	", names[i]);


	//�˻� �˰���
	while (1)
	{
		printf("\n�˻��� ���� ? ");
		gets(s_name);
		if (strcmp(s_name, "end") == 0)
			break;
		found = 1;
		for (i = 0; i < Cn; i++)
		{
			if (strcmp(names[i], s_name) == 0) // ���ڿ� ������ ǥ����!!! �߿�!!!!
			{
				found = 0;
				printf("%s, %d, %s \n", names[i], salary[i], comAddr[i]);
				//break; //���������� ���� �� �־ �������� ���� �����ȣ �����Ŷ�� break�� �ָ� ��
			}
		}
		if (found) //���̸�(1)
			printf("%s, Not found!!! \n", s_name);

	}//while(1) end

	return 0;
}
