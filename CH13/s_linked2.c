//s_linked2.c
#include<vld.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
	�ڱ����� ����ü : ���� �Ȱ��� ������ �ٸ� ����ü�� �ּҸ� ������(���� ã�ư� ���� ����ü �ּ�)
	���Ḯ��Ʈ
	tail�� ��尡 �߰��� �� ���� ��带 ��������ٶ� ��� / �߰��� �� ����
	���ڿ��� ��� �����Ҵ��� ���� �����Ͽ� �����ͷ� �޴´�.
	���ڿ��� �� ��ä���� �޸𸮰� ���γ�� ������ ����� => �� ���׸�Ʈ�� ������ ���� �����Ƿ� �ּҸ� �����ͷ� �޾� �����Ѵ�.
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
	struct EMPLOYEE* ptr, * prev; //����ü ������ ����
	struct EMPLOYEE* head, * tail;
	char tmp[200];
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

		do { //���ڹ迭�� �ڽ��� ũ�⸦ �Ѵ� ���ڿ��� ���� ���ɼ��� ����
			printf("���� : ? ");
			gets(tmp);
		} while (strlen(tmp) >= sizeof(ptr->name));
		strcpy(ptr->name, tmp);

		if (!strcmp(ptr->name, "end"))
			break;
		printf("���� : ? ");
		scanf("%d", &ptr->salary);
		printf("Ű(����) ? ");
		scanf("%f%*c", &ptr->height);
		printf("ȸ���ּ� ? "); // �ϴ� tmp�� ����
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
	 // 2.��� ���
	ptr = head;
	while (ptr)
	{
		printf("%s, %d, %.2f, %s \n", ptr->name, ptr->salary, ptr->height, ptr->comAddr);
		ptr = ptr->next; //���������� NULL�� ����
	}

	//3. �������
	ptr = head;
	while (ptr)
	{
		prev = ptr;
		ptr = ptr->next;
		//free(prev->comAddr); //���ϸ� �޸� ������ �߻��� : conAddr�� �ּҰ��� ���� ���� �ּҸ� ���� ���ι��� �����Ҵ��� ���ְ� �� �� ��ƾ ����
		free(prev);
	}
	//free(ptr); //���� ����� ���ϸ� ��Ÿ�� ������
	//ptr = NULL;
	return 0;
}