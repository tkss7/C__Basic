//fileio3.c
#include<stdio.h>
#include<stdlib.h>

/*
	fputs(����� ���ڿ��� �ּ�,������ ���� ��Ʈ�� �ּ�) : �����ּҺ��� NULL������ ã�� ����ִ´�]
	fgets(������ �ּ�,���� ũ��, ������ ���Ͻ�Ʈ�� �ּ�)
*/

int main()
{
	char str[20] = "kingdom", tmp[20];
	FILE* fp; //open�� ���������� ��� ����ü, ���� ������ �� ������ NULL���̹Ƿ� ����
/*
	//Save
	fp = fopen("data2.txt", "wt");//wt == write txt , t �� ����Ʈ ���̶� ��� ����
								  //at == append txt : ���� ���� �ڿ� �߰�
	if (fp == NULL) //��ũ �뷮������ ����
	{
		printf("file open error. \n");
		exit(1); //���α׷� �������
	}
	fputs(str, fp);

	fclose(fp);
*/
	//Load
	fp = fopen("data2.txt", "rt");//wt == write txt , t �� ����Ʈ ���̶� ��� ����
								  //at == append txt : ���� ���� �ڿ� �߰�
	if (fp == NULL) //��ũ �뷮������ ����
	{
		printf("file open error. \n");
		exit(1); //���α׷� �������
	}
	fgets(tmp,20, fp);

	fclose(fp);

	printf("tmp : %s \n", tmp);

	return 0;
}
