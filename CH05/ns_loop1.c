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
				goto move; //  goto는 레이블명이 있는 곳으로 점프함, 자주쓰면 로직이 꼬일 염려가있으므로 남용하면 X
			ch++;
		}
		printf("\n");
	}
move: //레이블명    goto 는 if로 제어가 불가능함
	printf("End. \n");
	return 0;
}