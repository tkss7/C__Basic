//stack_DArray.c
#include<stdio.h>
#include<stdlib.h>
// 스택을 배열로 구현할때는 동적배열로 구현해라
int resize = 5;
int top = -1;

int* stack;

push(int value)
{
	if (top >= resize - 1)
	{
		resize += 5;
		stack = (int*)realloc(stack,resize * (sizeof(int)));
		if (stack == NULL) //이거 = 한개 붙이면 에러뜸
		{
			perror("Error :");
			exit(1);
		}
		printf("resize : %d , top : %d \n", resize, top);
	}
	stack[++top] = value;
}

pop()
{
	if (top == -1)
	{
		printf("stack empty !! \n");
		return -1;
	}
	return stack[top--];
}
int main()
{
	int N;

	stack = (int*)malloc(resize* (sizeof(int)));
	if (stack == NULL)
	{
		perror("Error : ");
		exit(1);
	}
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);

	N = pop();
	printf("N : %d \n", N);//50

	printf("%d \n", pop());//40
	printf("%d \n", pop());//30
	printf("%d \n", pop());//20
	printf("%d \n", pop());//10
	printf("%d \n", pop());//empty
	return 0;
}