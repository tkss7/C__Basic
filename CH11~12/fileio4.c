//fileio4.c
#include<stdio.h>
#include<stdlib.h>

/*
EOF == 1byte
*/

int main()
{
	char tmp[80];
	FILE* fp; //open�� ���������� ��� ����ü, ���� ������ �� ������ NULL���̹Ƿ� ����

	//Save
	fp = fopen("C:\\temp_C\\datatype1.c", "rt");// "//"�� �齽���� �ϳ� ��Ÿ���� ���� �ΰ��� ex) \n, \t 
	if (fp == NULL) //��ũ �뷮������ ����, ���ҷ����� ����
	{
		printf("file open error. \n");
		exit(1); //���α׷� �������
	}

	while (1)
	{
		if (fgets(tmp, 80, fp)) //��ũ�� �ִ� ������ �ٴ����� �а������ �����
								//80����Ʈ �ȿ� �������� ������ �ű������ ����
								//80����Ʈ�� �Ѿ 80����Ʈ ������ ����
								//������ ���� �����ϸ� NULL�� ��ȯ��
			printf("%s ", tmp);
		else
			break;


	}

	fclose(fp);

	return 0;
}