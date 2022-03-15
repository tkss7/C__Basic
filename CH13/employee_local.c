//employee_local.c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
	지역변수로 head와 tail
*/

#define BUF_SIZE 50

typedef struct employee {
	char id[6];
	char name[20];
	int position;
	int salary;
	char comAddr[BUF_SIZE];
	struct employee* next;
} EMPLOYEE, * LPEMPLOYEE;
//구조체 자료형명, 구조체 포인터 자료형 명

int seq_no = 0;

void str_check(char* msg, int size, char* f_addr);
void num_check(char* msg, int max, int min, int* f_addr);
void emp_input(EMPLOYEE** Head, EMPLOYEE** Tail);
char* showPosition(int pos);
void node_free(LPEMPLOYEE Head);
void emp_output(EMPLOYEE* Head);
void emp_find(LPEMPLOYEE Head);
void emp_delete(EMPLOYEE** Head, LPEMPLOYEE* Tail);
void emp_save(LPEMPLOYEE Head);
void emp_load(LPEMPLOYEE* Head, LPEMPLOYEE* Tail);
//"성명", 20, 3006
//"회사주소", 50, 3034
void str_check(char* msg, int size, char* f_addr)
{
	char tmp[255];

	do {
		printf("%s ? ", msg);
		gets(tmp); //seoul aaaaaaaaaaaaaaaaaaaaaaaaaaaa, kim ??
	} while (strlen(tmp) >= size);

	strcpy(f_addr, tmp);
}

//"직급", 3, 0, 3026
//"월급", 7000000, 0, 3030
void num_check(char* msg, int max, int min, int* f_addr)
{
	int tmp;

	do {
		printf("%s ? ", msg);
		scanf("%d%*c", &tmp);

	} while (tmp > max || tmp < min);
	*f_addr = tmp;
}
//문자배열에 데이터를 받을때 3개는 받아와야한다?
void emp_input(EMPLOYEE **Head,EMPLOYEE **Tail)
{
	EMPLOYEE* ptr;

	while (1)
	{
		ptr = (EMPLOYEE*)malloc(sizeof(struct employee));
		if (ptr == NULL)
		{
			perror("Error ");
			exit(1);
		}

		seq_no++;
		sprintf(ptr->id, "A%.4d", seq_no);// 저장할 메모리의 주소,3번째 인자의내요을 두번쨰 인자에 문자열로 바꿔서 넣어라
		//.4d  : 4자리가안되면 0으로 채워주세요
		//코드 추가

		str_check("\n성명(입력종료:end)", sizeof(ptr->name), ptr->name);

		if (!strcmp(ptr->name, "end"))
		{
			seq_no--;
			break;
		}

		num_check("직급(0:부장,1:과장,2:대리,3:사원)", 3, 0, &ptr->position);

		num_check("월급", 7000000, 0, &ptr->salary);

		str_check("회사주소", sizeof(ptr->comAddr), ptr->comAddr);

		ptr->next = NULL;

		//코드입력
		if (*Head == NULL)
			*Head = *Tail = ptr;
		else
		{
			(*Tail)->next = ptr;
			*Tail = ptr;
		}
	}
	free(ptr);
}//emp_input() end

char* showPosition(int pos) //해제된 메모리
{
	static char* ch2;
	switch (pos)
	{
	case 0: ch2 = "부장";
		break;
	case 1: ch2 = "과장";
		break;
	case 2: ch2 = "대리";
		break;
	case 3: ch2 = "사원";
		break;
	}
	return ch2;
	//char POS[4][20]={"부장","과장","대리","사원"};
	//return POS[pos];

}

void emp_output(EMPLOYEE *Head)
{
	EMPLOYEE* ptr;

	ptr = Head;
	while (ptr)
	{
		printf("%s, %s, %s, %d, %s \n", ptr->id, ptr->name,
			showPosition(ptr->position),
			ptr->salary, ptr->comAddr);
		ptr = ptr->next;
	}
}//emp_output() end

void emp_find(LPEMPLOYEE Head)
{
	EMPLOYEE* ptr;
	int found;
	char s_name[20];

	ptr = Head;
	if (ptr == NULL)
	{
		printf(" 등록되어 있지 않습니다. \n");
		return;
	}

	while (1)
	{
		printf("\n검색할 성명 ? (검색종료:end) ");
		gets(s_name);
		if (!strcmp(s_name, "end"))
			break;

		found = 1;
		ptr = Head;

		while (ptr)
		{
			if (!strcmp(ptr->name, s_name))
			{
				found = 0;
				printf("%s, %s, %d, %d, %s \n", ptr->id, ptr->name,
					ptr->position,
					ptr->salary, ptr->comAddr);
			}
			ptr = ptr->next;
		}

		if (found)
			printf("%s, Not found !!\n", s_name);

	} //while(1) end

}//emp_find() end

void emp_delete(EMPLOYEE **Head, LPEMPLOYEE *Tail)
{
	EMPLOYEE* ptr, * prev;
	int found;
	char ch, s_id[10];

	ptr = *Head;
	if (ptr == NULL)
	{
		printf("등록되어 있지 않습니다. \n");
		return;
	}

	printf("\n삭제할 ID ? ");
	gets(s_id); //A0001, A0005, A0003

	*s_id = toupper(*s_id); //맨앞글자 대문자로 바꾸기
	//코드추가
	found = 1;
	while (ptr)
	{
		if (!strcmp(ptr->id, s_id))
		{
			printf("%s, %s, %d, %d, %s \n", ptr->id, ptr->name,
				ptr->position,
				ptr->salary, ptr->comAddr);
			printf("삭제할까요? (y/n) ");
			scanf("%c%*c", &ch);

			if (ch == 'Y' || ch == 'y')
			{
				//삭제 알고리즘
				if (ptr == *Head)
				{
					*Head = ptr->next;
				}
				else if (ptr == *Tail)
				{
					*Tail = prev;
					(*Tail)->next = NULL;
				}
				else
				{
					prev->next = ptr->next;
				}
				free(ptr);
				found = 0;
			}
			break; //ID는 중복이 없기때문에 불필요한 로직을 없애기 위해 써야함
		}

		prev = ptr;
		ptr = ptr->next;
	} //while (ptr) end

	if (found)
		printf("노드삭제 안 됨!!!\n");
	else
		printf("노드삭제 됨!!!\n");

}//emp_delete() end

void node_free(LPEMPLOYEE Head)
{
	EMPLOYEE* ptr, * x;

	ptr = Head;
	while (ptr)
	{
		x = ptr;
		ptr = ptr->next;
		free(x);
	}
}//node_free() end

void emp_save(LPEMPLOYEE Head)
{
	EMPLOYEE* ptr;
	FILE* fp;

	ptr = Head;
	if (ptr == NULL)
	{
		printf("등록되어 있지 않습니다. \n");
		return;
	}

	fp = fopen("s_emp.dat", "wb");
	if (fp == NULL)
	{
		perror("emp_save() ");
		exit(1);
	}

	fwrite(&seq_no, sizeof(int), 1, fp);

	while (ptr)
	{
		fwrite(ptr, sizeof(EMPLOYEE), 1, fp);
		ptr = ptr->next;
	}
	fclose(fp);

	printf("사원정보 save. \n");
} //emp_save() end

void emp_load(LPEMPLOYEE *Head, LPEMPLOYEE *Tail)
{
	struct employee* ptr;
	FILE* fp;

	fp = fopen("s_emp.dat", "rb"); //파일이 있으면 파일의 첫번쨰를 가리킨다.
	if (fp == NULL)
	{
		perror("emp_load() ");
		return;
	}

	fread(&seq_no, sizeof(int), 1, fp);

	while (1)
	{
		ptr = (EMPLOYEE*)malloc(sizeof(EMPLOYEE));
		if (ptr == NULL)
		{
			perror("emp_load() ");
			exit(1);
		}

		if (fread(ptr, sizeof(EMPLOYEE), 1, fp) != 1)
			break;

		if (*Head == NULL)
			*Head = *Tail = ptr;
		else
		{
			(*Tail)->next = ptr;
			*Tail = ptr;
		}
	}
	fclose(fp);
	free(ptr);

	printf("사원정보 load. \n");
} //emp_load() end

int main()
{
	int choice, stop = 1, count;

	EMPLOYEE* head;
	LPEMPLOYEE tail; //head와 tail은 같은 형태의 선언임

	head = tail = NULL;
	emp_load(&head, &tail);

	while (stop)
	{
		printf("\n1. 사원정보 입력 \n");
		printf("2. 사원정보 출력 \n");
		printf("3. 사원정보 검색 \n");
		printf("4. 사원정보 삭제 \n");
		printf("5. 사원정보 저장 \n");
		printf("6. 프로그램 종료 \n");
		printf("Select ? (1~6) ");
		scanf("%d%*c", &choice);
		switch (choice)
		{
		case 1: emp_input(&head, &tail);
			break;
		case 2: emp_output(head);
			break;
		case 3: emp_find(head);
			break;
		case 4: emp_delete(&head, &tail);
			break;
		case 5: emp_save(head);
			break;
		case 6: node_free(head);
			stop = 0;
			break;
		}

		//fflush(stdin);
	}

	return 0;
}//main() end

