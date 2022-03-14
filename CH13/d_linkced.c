//d_linked.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
	�ڱ����� ����ü : ���� �Ȱ��� ������ �ٸ� ����ü�� �ּҸ� ������(���� ã�ư� ���� ����ü �ּ�)
	���Ḯ��Ʈ
	tail�� ��尡 �߰��� �� ���� ��带 ��������ٶ� ��� / �߰��� �� ����
	�̱� ��ũ�� : �۾� �������� next ���� �޸𸮰� ���ǵǸ� �����̾ȵ�
	-> ����ũ�带 ���ؼ� next�� �ҽǵǾ ������ before������ ���� �����ϴ�.
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
	struct EMPLOYEE* ptr, * prev; //����ü ������ ����
	struct EMPLOYEE* head, * tail;

	//��� �Ҵ�
	head = tail = NULL;

	while (1)
	{
		ptr = (struct EMPLOYEE*)malloc(sizeof(struct EMPLOYEE));
		if (ptr == NULL)
		{
			perror("Error : ");
			exit(1);
		}

		printf("���� : ? ");
		gets(ptr->name);
		if (!strcmp(ptr->name, "end"))
			break;
		printf("���� : ? ");
		scanf("%d", &ptr->salary);
		printf("Ű(����) ? ");
		scanf("%f%*c", &ptr->height);
		printf("ȸ���ּ� ? ");
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

	 // 2.��� ���
	printf("============head -> tail ==============\n");
	ptr = head;
	while (ptr)
	{
		printf("%s, %d, %.2f, %s \n", ptr->name, ptr->salary, ptr->height, ptr->comAddr);
		ptr = ptr->next; //���������� NULL�� ����
	}


	printf("============tail -> head ==============\n");
	ptr = tail;
	while (ptr)
	{
		printf("%s, %d, %.2f, %s \n", ptr->name, ptr->salary, ptr->height, ptr->comAddr);
		ptr = ptr->before; //���������� NULL�� ����
	}
	printf("==========================================\n");
	//3. �������
	ptr = head;


	while (ptr)
	{
		prev = ptr;
		ptr = ptr->next;
		free(prev);
	}
	free(ptr); //���� ����� ���ϸ� ��Ÿ�� ������
	ptr = NULL;
	return 0;
}