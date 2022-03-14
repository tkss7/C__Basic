//d_linked.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
	자기참조 구조체 : 나와 똑같은 형식의 다른 구조체의 주소를 저장함(내가 찾아갈 다음 구조체 주소)
	연결리스트
	tail은 노드가 추가될 때 노드와 노드를 연결시켜줄때 사용 / 추가할 때 사용됨
	싱글 링크드 : 작업 과정에서 next 등의 메모리가 유실되면 접근이안됨
	-> 더블링크드를 통해서 next가 소실되어도 역방향 before참조로 접근 가능하다.
*/

struct EMPLOYEE {
	char name[20];
	int salary;
	float height;
	char comAddr[40];
	struct EMPLOYEE* next;
	struct EMPLOYEE* before;
};

int main()
{
	struct EMPLOYEE* ptr, * prev; //구조체 포인터 변수
	struct EMPLOYEE* head, * tail;

	//노드 할당
	head = tail = NULL;

	while (1)
	{
		ptr = (struct EMPLOYEE*)malloc(sizeof(struct EMPLOYEE));
		if (ptr == NULL)
		{
			perror("Error : ");
			exit(1);
		}

		printf("성명 : ? ");
		gets(ptr->name);
		if (!strcmp(ptr->name, "end"))
			break;
		printf("월급 : ? ");
		scanf("%d", &ptr->salary);
		printf("키(신장) ? ");
		scanf("%f%*c", &ptr->height);
		printf("회사주소 ? ");
		gets(ptr->comAddr);

		ptr->next = NULL;
		ptr->before = NULL;
		if (head == NULL)
			head = tail = ptr;
		else
		{
			ptr->before = tail;			tail->next = ptr;
			tail = ptr;
		}

	} //while (1) end

	 // 2.노드 출력
	printf("============head -> tail ==============\n");
	ptr = head;
	while (ptr)
	{
		printf("%s, %d, %.2f, %s \n", ptr->name, ptr->salary, ptr->height, ptr->comAddr);
		ptr = ptr->next; //최종적으로 NULL을 만남
	}


	printf("============tail -> head ==============\n");
	ptr = tail;
	while (ptr)
	{
		printf("%s, %d, %.2f, %s \n", ptr->name, ptr->salary, ptr->height, ptr->comAddr);
		ptr = ptr->before; //최종적으로 NULL을 만남
	}
	printf("==========================================\n");
	//3. 노드해제
	ptr = head;


	while (ptr)
	{
		prev = ptr;
		ptr = ptr->next;
		free(prev);
	}
	free(ptr); //해제 제대로 안하면 런타임 오류뜸
	ptr = NULL;
	return 0;
}