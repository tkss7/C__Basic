//490p_12_05.c
#include<stdio.h>

int main()
{
	FILE* fp;
	char ch;
	ch = 65;

	fp = fopen("ex05.dat", "wb");
	if (fp == NULL)
	{
		perror("Error : ");
		exit(1);
	}
	while (ch<91)
	{
		fputc(ch, fp);
		fputc(ch+32, fp);
		fputc(' ', fp);
		ch++;
	}
	fclose(fp);


	return 0;
}