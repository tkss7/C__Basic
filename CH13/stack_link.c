//stack_linked.c 03-15
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 큐나 스택은 일회성 데이터
// 내부적으로 함수 실행과정에서 스택구조의 주소 저장을 통해 접근 및 돌아온다.
typedef struct _node
{
     int id;
     char name[20];
     struct _node *next;
} node;

void init_stack(void);
int push(void);
void pop(void);
void stack_print(void);
void clear_stack(void);

node *top;

int main()
{
	 int stop =1;
	 char ch;

	 init_stack();

	 while(stop)
	 {
       printf("\n1. Stack push .. \n");
       printf("2. Stack print.. \n");
		 printf("3. Stack pop .. \n");
       printf("4. clear stack .. \n");
		 printf("5. quit .. \n");
		 printf("\n   select ... ? ");

		 ch=getchar();
		 getchar(); //엔터 값 제거
		 //fflush(stdin);

       switch(ch)
		 {
			case '1' : push();
			        break;
			case '2' : stack_print();
			        break;
			case '3' : pop();
			        break;
			case '4' : clear_stack();
			        break;
			case '5' : stop=0;
		 }
	 }
	 return 0;
}

void init_stack(void)
{
   top=NULL;
}


int push(void)
{
   node *temp;

	while(1)
	{

		if ((temp = (node*)malloc(sizeof(node))) == NULL)
		{
			printf("memory allocation error...\n");
			return -1;
		}

		printf("\nID ? (quit:-1) ");
		scanf("%d%*c", &temp->id);

		if(temp->id==-1)
		    break;
       printf("NAME ? ");
	    gets(temp->name);
   
		 temp->next=top; //tail == top , ptr == temp
		 top=temp;
	}
	free(temp);

	return 1;
}

void stack_print(void)
{
   node *temp;

   temp=top;
   printf("\nStack list : Top -> Buttom\n");

	while(temp)
	{
      printf("%d, %s \n", temp->id, temp->name);
		temp=temp->next;
	}
}

void pop(void)
{
	 node *x;

	 if (top == NULL)  // if empty 
  	 {
	      printf("Stack underflow... \n");
		   return ;
     }	
	 
	 printf("\nGet node -> id: %d, name: %s \n ",top->id, top->name);
    //node 주소연결 및 삭제 
	 x=top;
    top=top->next;
    free(x);
}

void clear_stack(void)
{
	node *x;

    while (top)
    {
	   x = top;
 	   top = top->next;
	   free(x);
	 }
}

