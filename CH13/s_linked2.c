//s_linked2.c
#include<vld.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
	자기참조 구조체 : 나와 똑같은 형식의 다른 구조체의 주소를 저장함(내가 찾아갈 다음 구조체 주소)
	연결리스트
	tail은 노드가 추가될 때 노드와 노드를 연결시켜줄때 사용 / 추가할 때 사용됨
	문자열이 길면 동적할당을 따로 관리하여 포인터로 받는다.
	문자열은 다 못채워서 메모리가 따로노는 공간이 생긴다 => 힙 세그먼트의 취지에 맞지 않으므로 주소를 포인터로 받아 진행한다.
*/

struct EMPLOYEE {
	char name[20];
	int salary;
	float height;
	char *comAddr;
	struct EMPLOYEE* next;
};

int main()
{
	struct EMPLOYEE* ptr, * prev; //구조체 포인터 변수
	struct EMPLOYEE* head, * tail;
	char tmp[200];
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

		do { //문자배열이 자신의 크기를 넘는 문자열을 받을 가능성을 없앰
			printf("성명 : ? ");
			gets(tmp);
		} while (strlen(tmp) >= sizeof(ptr->name));
		strcpy(ptr->name, tmp);

		if (!strcmp(ptr->name, "end"))
			break;
		printf("월급 : ? ");
		scanf("%d", &ptr->salary);
		printf("키(신장) ? ");
		scanf("%f%*c", &ptr->height);
		printf("회사주소 ? "); // 일단 tmp에 받음
		gets(tmp);

		ptr->comAddr = (char*)malloc(strlen(tmp) + 1);
		strcpy(ptr->comAddr, tmp);

		ptr->next = NULL;
		if (head == NULL)
			head = tail = ptr;
		else
		{
			tail->next = ptr;
			tail = ptr;
		}

	} //while (1) end
	free(ptr);
	 // 2.노드 출력
	ptr = head;
	while (ptr)
	{
		printf("%s, %d, %.2f, %s \n", ptr->name, ptr->salary, ptr->height, ptr->comAddr);
		ptr = ptr->next; //최종적으로 NULL을 만남
	}

	//3. 노드해제
	ptr = head;
	while (ptr)
	{
		prev = ptr;
		ptr = ptr->next;
		//free(prev->comAddr); //안하면 메모리 누수가 발생함 : conAddr의 주소값을 지워 먼저 주소를 위해 따로받은 동적할당을 없애고 그 후 루틴 진행
		free(prev);
	}
	//free(ptr); //해제 제대로 안하면 런타임 오류뜸
	//ptr = NULL;
	return 0;
}