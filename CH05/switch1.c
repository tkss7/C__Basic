#include <stdio.h>

void emp_input(void);
void emp_output(void);
void emp_find(void);
// �߰�ȣ�� �������� ���� ���ۿ� �ּ�ó���� �ִ°� ����

int main()
{
	int choice, stop=1;
	/*
	while (stop)
	{

		printf("1. ������� �Է� \n");
		printf("2. ������� ��� \n");
		printf("3. ������� �˻� \n");
		printf("4. ������� ���� \n");
		printf("Select ? (1~4) ");
		scanf("%d", &choice);

		switch (choice) //�ش�Ǵ� ��ȣ�� ������ �ٽ� �θ�
		{
		case 1: emp_input();
			break;
		case 2: emp_output();
			break;
		case 3: emp_find();
			break;
		case 4: stop = 0;
			break;
		}
	}//while(1)
	*/

	do
	{

		printf("1. ������� �Է� \n");
		printf("2. ������� ��� \n");
		printf("3. ������� �˻� \n");
		printf("4. ������� ���� \n");
		printf("Select ? (1~4) ");
		scanf("%d", &choice); //���д� ���α׷��� ������ ���� ���� ���ڰ� �Է��ȴٸ� ���� �������� ���ѱ� -> ���ڴ� case�� �����Ƿ� �ٽ� ���� -> ���ѷ���

		switch (choice) //�ش�Ǵ� ��ȣ�� ������ �ٽ� �θ�
		{
		case 1: emp_input();
			break;
		case 2: emp_output();
			break;
		case 3: emp_find();
			break;
		case 4: stop = 0;
			break;
		}
		choice = NULL;
		while (getchar() != '\n'); // ���ڰ� ������ ����
	} while (choice != 4);

	return 0;
}
void emp_input(void)
{
	printf("������� �Է��Լ�. \n");
}
void emp_output(void)
{
	printf("������� ����Լ�. \n");
}
void emp_find(void)
{
	printf("������� �˻��Լ�. \n");
}