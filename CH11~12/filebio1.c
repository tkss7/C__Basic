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
	int i = 0;
	FILE* fp;
	STUDENT tmp, stu[3] = {
		{ "���޷�",89,100,30 },
		{ "�̸���",100,75,50 },
		{ "������",68,83,67 }
	};
	//Save
		
		fp = fopen("data4.dat","ab");

		if (fp == NULL)
		{
			printf("file open error. \n");
			exit(1);
		}

		//stu.avg = (float)(stu.kor + stu.eng + stu.mat) / 3;

		//fwrite(stu, sizeof(stu), 1, fp);// stu�ּҷ� ���� stu�� ����� 1�� �޾Ƽ� fp�� �־��ּ���
		fwrite(stu, sizeof(STUDENT), 3, fp);// 3���� ���ÿ� �� ,  ��� ������ �𸣴ϱ� �Ʒ����� �ڵ带 ������
		
		fclose(fp);
	
	//Load
	
	fp = fopen("data4.dat", "rb"); //�����Ͽ� ������ ù�� ùĭ�� ����Ų��

	if (fp == NULL)
	{
		printf("file open error. \n");
		exit(1);
	}
	
	while(1)
	{  //fread�� ���̻� �п�� ������ 3���� ���ڰ� �ƴ� ���� ��ȯ�Ѵ�.
		if (fread(&tmp, sizeof(STUDENT), 1, fp) != 1)// �ڷ��� ���о��� �ѹ��� ��ƴ� ������Ƿ� �ӵ��� �������� txt������ �ƴ϶� ������ Ȯ���� �Ұ����ϴ�
			break;
					//�� txt�����̾�� �� �ʿ䰡 ���ٸ� ��κ� ���� ��Ʈ���� ����Ѵ�
		printf("%s, %d, %d, %d, %.2f \n", tmp.name, tmp.kor, tmp.eng, tmp.mat, tmp.avg);
	
	}
	

	//fread(&tmp, sizeof(tmp[0]), 4, fp);
	//for(i=0;i<4;i++)
	//	printf(" %s, %d, %d, %d, %.2f \n", tmp[i].name, tmp[i].kor, tmp[i].eng, tmp[i].mat, tmp[i].avg);

	

	fclose(fp);
	return 0;
}