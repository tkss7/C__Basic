//347p_quiz.c
#include<stdio.h>
#include<string.h>

/*
strstr(str1,str2) =str1���� str2�� ã�� ã���� ã�� ���ڿ��� �����ּ� ��ȯ
strupr() = ��� �빮�ڷ� ġȯ
strlwr() = ��� �ҹ��ڷ� ġȯ
toupper() = �ѹ��� �빮�ڷ� ��ȯ
tolower() = �ѹ��� �ҹ��ڷ� ��ȯ
strcpy(to, from) = from�� to�� ���ڿ� ����
strcmp(x1, x2) = x1�� x2 ��, ������ 0, x1�� ũ�� ���, x2�� ũ�� ����
strlen() = ���ڿ� ���� �˾Ƴ�
strcat(to, from) = from�� to�� ������
*/

int main()
{
	char color[5][10] = { "Red","Green","Yellow","Blue","Black" };
	char str[10], tmp_str[10], tmp_color[10], answer;
	int i;

	while (1)
	{
		printf("\n�����Է� ? ");
		gets(str);
		strcpy(tmp_str, str);
		for (i = 0; i < 5; i++)
		{
			strcpy(tmp_color, color[i]);
			if (strcmp(strupr(tmp_str), strupr(tmp_color)) == 0)
			{
				printf("color[%d] �࿡�� �˻�: %s\n", i, color[i]);
				break;
			}
		}
			if (i == 5)
				printf("%s ������ color �迭�� ���ԵǾ� ���� �ʽ��ϴ�. \n",str);
		
		do {
			printf("��� �ұ��? (y/n) ");
			answer = toupper(getchar());  // toupper() => �ѹ��� �빮�ڷ� ���, tolower() => �ѹ��� �ҹ��ڷ� ���
			if (answer == 'Y')
				continue;
			else if (answer == 'N')
				exit(0);
			else
				printf("�ùٸ��� ���� �亯�Դϴ�.");
			while (getchar() != '\n');

		} while (answer != 'Y' && answer != 'N');
		while (getchar() != '\n');

	}// while(1) end



	return 0;
}