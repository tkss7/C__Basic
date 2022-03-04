#include <stdio.h>

int main()
{
	char c1, c2;

	printf("input char ? ");
	c1 = getchar();
	printf("c1: %c \n", c1);

	//fflush(stdin); 괄호안에 있는 내용을 비워라 stdin == 입력버퍼
	while (getchar() != '\n'); //입력버퍼의 내용을 하나씩 꺼내서 사실상 버린다.
	
	printf("input char ? ");
	c2 = getchar();
	printf("c2: %c \n", c2);
	return 0;
}