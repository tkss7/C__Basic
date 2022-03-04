//while1.c
#include <stdio.h>

//while : 반복횟수를 모를 때 주로 사용

int main()
{
	char ch;

	ch = 'A';
	while (ch<='Z')
	{
		printf("%c ", ch);
		ch++;
	}
	printf("\n");

	ch = 'A';

	do{                   //반복문 내의 코드를 무조건 한번은 실행해야 할 때 사용
		printf("%c ", ch);
		ch++;
	} while (ch <= 'Z');
	printf("\n");

	return 0;
}