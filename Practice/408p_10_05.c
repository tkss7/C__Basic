//408p_10_05.c
#include<stdio.h>
#include<string.h>

/*
	while (*(from+i))
	{
		//*from++; // ==> *from = *(from+1);
		//*(from + i); // ���� ���ڸ� �� ǥ���� ����
		//from++; //from�� ���ڿ� ����� �ƴϹǷ� �ּҰ��� ���ӵǾ� �Ҵ�����ʴ´�.
				  //tmp[]�� �����ּҰ� 4byte �����ϸ� ������ �𸣴� ������ ��������.
		i++;
	}
*/

void Reverse_func(char *to, char* from);

int main()
{
	//1. ���� ����
	char str[20], re_str[20];


	//2. ���� �� ���
	printf("Input String ? ");
	gets(str);
	Reverse_func(re_str,str);


	return 0;
}

void Reverse_func(char *to, char *from)
{
	int i = 0, cn = 0;

	while (*(from+i))
	{
		i++;
	}
	
	cn = i;
	i = i - 1; // '\0'�� ����
	printf("\n");
	while (i>=0)
	{
		*to = *(from+i);
		printf("%c ", *to);
		i--,to++;
	}
	printf("\n���ڿ� ũ�� : %d", cn);
	
}

