//490p_10_06.c - �̿ϼ�-
#include<stdio.h>

typedef struct INFORMATION
{
	char names[20];
	char region[20];
	char region2[20];
	char dong[20];
	int bungi;
	char number[20];
	char space;

}INFO;

int main()
{
	INFO information[3]=
	{
		{"�����","�����","������","���ﵿ",100,"02-3429-0001",'\n'},
		{"���޷�","�����","������","������",200,"02-2294-0002",'\n'},
		{"������","���ʽ�","������","�ٴٵ�",300,"061-221-0003",'\n'}
	};

	FILE* fp;

	fp = fopen("ex06.dat", "wb");
	if (fp == NULL)
	{
		perror("Error : ");
		exit(1);
	}
		fwrite(information, sizeof(information[0]), 3, fp);


	fclose(fp);
	//fgets(information, 3, fp);


	return 0;
}