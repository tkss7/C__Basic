//ns_loop1c
#include <stdio.h>

int main()
{
	char ch, i;
	char input;

	printf("input char ? ");
	input = getchar();
	ch = 'A';
	for (i = 1; i <= 3; i++)
	{
		ch = 'A';
		while (ch <= 'Z')
		{
			printf("%c ", ch);
			if (ch == input)
				//break;
				goto move; //  goto�� ���̺���� �ִ� ������ ������, ���־��� ������ ���� �����������Ƿ� �����ϸ� X
			ch++;
		}
		printf("\n");
	}
move: //���̺��    goto �� if�� ��� �Ұ�����
	printf("End. \n");
	return 0;
}