//fileio2.c
#include<stdio.h>
#include<stdlib.h>

/*
	fgetc() : ��Ʈ������ ���ڸ� �о� ���ۿ� ������
	fputc() : fp�� ���õ� ���Ͽ� ���۰� ����Ű�� ���ڸ� �����
*/

int main()
{
	char ch;
	FILE* in, *out; //open�� ���������� ��� ����ü, ���� ������ �� ������ NULL���̹Ƿ� ����

	//Save
	in = fopen("data1.txt", "rt");//wt == write txt , t �� ����Ʈ ���̶� ��� ����
								  //at == append txt : ���� ���� �ڿ� �߰�
	if (in == NULL) //��ũ �뷮������ ����
	{
		printf("in stream error. \n");
		exit(1); //���α׷� �������
	}

	out = fopen("data1.bak", "wt");//wt == write txt , t �� ����Ʈ ���̶� ��� ����
							  //at == append txt : ���� ���� �ڿ� �߰�
	if (out == NULL) //��ũ �뷮������ ����
	{
		printf("out stream error. \n");
		exit(1); //���α׷� �������
	}

	//���Ϻ���
	while ((ch = fgetc(in)) != EOF)
	{
		fputc(ch, out);
	}
	
	fclose(in);
	fclose(out);

	printf("data1.bak ���� ����. \n");

	return 0;
}
