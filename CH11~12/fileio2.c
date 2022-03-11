//fileio2.c
#include<stdio.h>
#include<stdlib.h>

/*
	fgetc() : ��Ʈ������ ���ڸ� �о� ���ۿ� ������
	fputc() : fp�� ���õ� ���Ͽ� ���۰� ����Ű�� ���ڸ� �����

	C:\> ch11~12.exe ../data2.txt ../data2.bak
		../ => ���� ����(�θ�)�濡

	ch11~12.exe\0   (.exe�� ���̵� �Ⱥ��̵� �������)
	../data2.txt\0
	../data2.bak\0
*/

int main(int argc, char *argv[])
{
	char ch;
	FILE* in, *out; //open�� ���������� ��� ����ü, ���� ������ �� ������ NULL���̹Ƿ� ����

	//Save
	in = fopen(argv[1], "rt");//wt == write txt , t �� ����Ʈ ���̶� ��� ����
								  //at == append txt : ���� ���� �ڿ� �߰�
	if (in == NULL) //��ũ �뷮������ ����
	{
		printf("in stream error. \n");
		exit(1); //���α׷� �������
	}

	out = fopen(argv[2], "wt");//wt == write txt , t �� ����Ʈ ���̶� ��� ����
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
