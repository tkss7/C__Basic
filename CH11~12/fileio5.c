//fileio5.c
#include<stdio.h>
#include<stdlib.h>

/*
	fscanf(FILE*,char *, ...) : ...  �� ������ : �������ڸ� ���� �Լ�
	�ؽ�Ʈ ��Ʈ�� : ���� ������ �ٷιٷ� �� �� ���� ( r,rt,w,wt,a,at )
					�ٸ� �뵵�� �����ͷε� �� �� ����
					������ ��ȯ�۾����� ���� �ӵ�(����)�� ��������.

	���� ��Ʈ�� : ��ȯ�۾��� ���� -> �ӵ��� ������. (rb,wb,ab)
				  ���� �����̹Ƿ� �˾� �� ���� ����.
				  �ٸ��뵵�� ��� �Ұ��� -> ���ø����̼� �����θ� �� �� �ִ�.

*/

typedef struct ST_STUDENT
{
	char name[20];
	int kor;
	int eng;
	int mat;
	float avg;
}STUDENT;

int main()
{
	FILE* fp;
	STUDENT stu = { "ȫ�浿",89,91,70 },tmp;
//Save
	/*
	fp = fopen("data3.txt","wt");

	if (fp == NULL)
	{
		printf("file open error. \n");
		exit(1);
	}

	stu.avg = (float)(stu.kor + stu.eng + stu.mat) / 3;
	
	
	fprintf(fp, "%s %d %d %d %f", stu.name, stu.kor, stu.eng, stu.mat, stu.avg); //(3)�޸𸮿� �ִ� �����͵���
	//fprintf((1),(2),(3));														//(2)�ڷ��� �����ڿ� ���缭 (1)���� ��Ʈ���� �־��ּ���
	
	fclose(fp);
*/
	//Load
	fp = fopen("data3.txt", "rt"); //�����Ͽ� ������ ù�� ùĭ�� ����Ų��

	if (fp == NULL)
	{
		printf("file open error. \n");
		exit(1);
	}

	fscanf(fp, "%s %d %d %d %f"/*<-���ڿ�����̹Ƿ� �ּҰ���*/, tmp.name, &tmp.kor, &tmp.eng, &tmp.mat, &tmp.avg); //(1)���� ��Ʈ������ ������
	//fscanf((1),(2),(3));																//(2)�ڷ��� �����ڿ� ���缭(3)�޸𸮿� �־��ּ���

	fclose(fp);

	printf("%s, %d, %d, %d, %.2f \n", tmp.name, tmp.kor, tmp.eng, tmp.mat, tmp.avg);

	return 0;
}