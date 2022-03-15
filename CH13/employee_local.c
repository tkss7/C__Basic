//employee_local.c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
	���������� head�� tail
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
//����ü �ڷ�����, ����ü ������ �ڷ��� ��

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
//"����", 20, 3006
//"ȸ���ּ�", 50, 3034
void str_check(char* msg, int size, char* f_addr)
{
	char tmp[255];

	do {
		printf("%s ? ", msg);
		gets(tmp); //seoul aaaaaaaaaaaaaaaaaaaaaaaaaaaa, kim ??
	} while (strlen(tmp) >= size);

	strcpy(f_addr, tmp);
}

//"����", 3, 0, 3026
//"����", 7000000, 0, 3030
void num_check(char* msg, int max, int min, int* f_addr)
{
	int tmp;

	do {
		printf("%s ? ", msg);
		scanf("%d%*c", &tmp);

	} while (tmp > max || tmp < min);
	*f_addr = tmp;
}
//���ڹ迭�� �����͸� ������ 3���� �޾ƿ;��Ѵ�?
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
		sprintf(ptr->id, "A%.4d", seq_no);// ������ �޸��� �ּ�,3��° �����ǳ����� �ι��� ���ڿ� ���ڿ��� �ٲ㼭 �־��
		//.4d  : 4�ڸ����ȵǸ� 0���� ä���ּ���
		//�ڵ� �߰�

		str_check("\n����(�Է�����:end)", sizeof(ptr->name), ptr->name);

		if (!strcmp(ptr->name, "end"))
		{
			seq_no--;
			break;
		}

		num_check("����(0:����,1:����,2:�븮,3:���)", 3, 0, &ptr->position);

		num_check("����", 7000000, 0, &ptr->salary);

		str_check("ȸ���ּ�", sizeof(ptr->comAddr), ptr->comAddr);

		ptr->next = NULL;

		//�ڵ��Է�
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

char* showPosition(int pos) //������ �޸�
{
	static char* ch2;
	switch (pos)
	{
	case 0: ch2 = "����";
		break;
	case 1: ch2 = "����";
		break;
	case 2: ch2 = "�븮";
		break;
	case 3: ch2 = "���";
		break;
	}
	return ch2;
	//char POS[4][20]={"����","����","�븮","���"};
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
		printf(" ��ϵǾ� ���� �ʽ��ϴ�. \n");
		return;
	}

	while (1)
	{
		printf("\n�˻��� ���� ? (�˻�����:end) ");
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
		printf("��ϵǾ� ���� �ʽ��ϴ�. \n");
		return;
	}

	printf("\n������ ID ? ");
	gets(s_id); //A0001, A0005, A0003

	*s_id = toupper(*s_id); //�Ǿձ��� �빮�ڷ� �ٲٱ�
	//�ڵ��߰�
	found = 1;
	while (ptr)
	{
		if (!strcmp(ptr->id, s_id))
		{
			printf("%s, %s, %d, %d, %s \n", ptr->id, ptr->name,
				ptr->position,
				ptr->salary, ptr->comAddr);
			printf("�����ұ��? (y/n) ");
			scanf("%c%*c", &ch);

			if (ch == 'Y' || ch == 'y')
			{
				//���� �˰���
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
			break; //ID�� �ߺ��� ���⶧���� ���ʿ��� ������ ���ֱ� ���� �����
		}

		prev = ptr;
		ptr = ptr->next;
	} //while (ptr) end

	if (found)
		printf("������ �� ��!!!\n");
	else
		printf("������ ��!!!\n");

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
		printf("��ϵǾ� ���� �ʽ��ϴ�. \n");
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

	printf("������� save. \n");
} //emp_save() end

void emp_load(LPEMPLOYEE *Head, LPEMPLOYEE *Tail)
{
	struct employee* ptr;
	FILE* fp;

	fp = fopen("s_emp.dat", "rb"); //������ ������ ������ ù������ ����Ų��.
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

	printf("������� load. \n");
} //emp_load() end

int main()
{
	int choice, stop = 1, count;

	EMPLOYEE* head;
	LPEMPLOYEE tail; //head�� tail�� ���� ������ ������

	head = tail = NULL;
	emp_load(&head, &tail);

	while (stop)
	{
		printf("\n1. ������� �Է� \n");
		printf("2. ������� ��� \n");
		printf("3. ������� �˻� \n");
		printf("4. ������� ���� \n");
		printf("5. ������� ���� \n");
		printf("6. ���α׷� ���� \n");
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

