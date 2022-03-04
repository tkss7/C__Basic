#include <stdio.h>

void emp_input(void);
void emp_output(void);
void emp_find(void);
// 중괄호가 많아지면 끝과 시작에 주석처리해 주는게 좋음

int main()
{
	int choice, stop=1;
	/*
	while (stop)
	{

		printf("1. 사원정보 입력 \n");
		printf("2. 사원정보 출력 \n");
		printf("3. 사원정보 검색 \n");
		printf("4. 사원정보 종료 \n");
		printf("Select ? (1~4) ");
		scanf("%d", &choice);

		switch (choice) //해당되는 번호가 없으면 다시 부름
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

		printf("1. 사원정보 입력 \n");
		printf("2. 사원정보 출력 \n");
		printf("3. 사원정보 검색 \n");
		printf("4. 사원정보 종료 \n");
		printf("Select ? (1~4) ");
		scanf("%d", &choice); //실패는 프로그램을 죽이지 않음 만약 문자가 입려된다면 밑의 로직으로 떠넘김 -> 문자는 case에 없으므로 다시 실행 -> 무한루프

		switch (choice) //해당되는 번호가 없으면 다시 부름
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
		while (getchar() != '\n'); // 문자가 들어오면 지움
	} while (choice != 4);

	return 0;
}
void emp_input(void)
{
	printf("사원정보 입력함수. \n");
}
void emp_output(void)
{
	printf("사원정보 출력함수. \n");
}
void emp_find(void)
{
	printf("사원정보 검색함수. \n");
}