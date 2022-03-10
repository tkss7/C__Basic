//fileio1.c
#include<stdio.h>
#include<stdlib.h>// exit �Լ��� ������ ����
/*
* ������Ʈ " " = ��� ����� �ּҸ� �ǹ���
* 
�ü���� �����ϰ� �Ǹ� ǥ�ؽ�Ʈ���� ��������
stdin : ǥ�� �Է���ġ(��κ� Ű����)
stdout : ǥ�� �����ġ(�͹̳� = �����)
stderr : ǥ�� ���������ġ(�͹̳� = �����)
��Ʈ�� : ���μ����� �ܺ���ġ���� ������ ����

C������ ǥ�ؽ�Ʈ�� ��ġ�� �̿��ϴ� �Լ��� �����Ѵ�
-> scanf() : printf()
getchar(), putchar()
get(), puts()
disk���� ���μ��� : load
���μ������� disk : save
== file I/O
����� Ű���尡 �ƴ� �ٸ� ��ġ�� �ְ���� �� �ü���� å�� ������ ex) disk
�ְ� �ޱ����� �غ����� �ʿ���

1. file open(��ġ ����)(��Ʈ�� ����) == fopen()
2. R/W �Լ��� �̿��ؼ� save, load�� ����� ��
3. �� ������ file close ����� �� ( ��Ʈ�� ����) == fclose()

FILE = open�� ���������� ��� ����ü
*/

// �����Լ��� �θ�� OS(�ü��)��
// O/S => ���н� ����� �ü���� �׻� ���μ����� �����ڵ� (exit code(0 : ����, not 0 : ����)�� �䱸��
// ��ȣ���� 1,2,3�� ������ �Լ��� ���п뵵�� �����ڵ��� ����ϱ⵵ ��
int main()
{
	char ch;
	FILE* fp; //open�� ���������� ��� ����ü, ���� ������ �� ������ NULL���̹Ƿ� ����
	
	//Save
	fp = fopen("data1.txt", "at");//wt == write txt , t �� ����Ʈ ���̶� ��� ����
								  //at == append txt : ���� ���� �ڿ� �߰�
	if (fp == NULL) //��ũ �뷮������ ����
	{
		printf("file open error. \n");
		exit(1); //���α׷� �������
	}

	puts("stdin -> disk "); //Ű����� �Է��Ѱ� ����ͷ� �����ٲ���
	while ((ch = fgetc(stdin)) != EOF) //fgetc = �ѹ��ڸ� ����
	{ //Ű����� �ѹ��ھ� �Է¹޾� �����
		fputc(ch, fp);//Ctrl + Z�� ������ �Է� ����, �Է¹޾� file�� ����
		fputc(ch, stdout);// stdout == �͹̳� â ==> �Է¹޾� �͹̳� â�� ���
	} 

	fclose(fp);
	

	//Load
	fp = fopen("data1.txt", "rt");//rt == read txt , �����ϸ� ���� �� ù���ڿ� Ŀ���� ������
	if (fp == NULL) //��ũ �뷮������ ����
	{
		printf("file open error. \n");
		exit(1); //���α׷� �������
	}

	puts("stdin -> disk "); //Ű����� �Է��Ѱ� ����ͷ� �����ٲ���
	while ((ch = fgetc(fp)) != EOF) //fgetc = �ѹ��ڸ� ����
	{ //Ű����� �ѹ��ھ� �Է¹޾� �����
		fputc(ch, stdout); //������ �� �������� 1byte�� EOF ������ ��������  
	} // stdout == �͹̳� â

	fclose(fp);


	return 0;
}