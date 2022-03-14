//mallo1.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
	힙세그먼트 : 런타임에 메모리가 결정됨 -> 실행중에  개발자에게 제어권을 줌
	스택세그먼트 : 함수가 호출될 때 메모리 할당, 함수 나갈떄 메모리 반납
	
	malloc() : 메모리 공간 부족이면 NULL값 반환
	calloc(sizeof(double), 20) : 두 개를 곱한 바이트만큼 할당하며 처음에 0으로 초기화 시킨다 
	 -> 반드시 0으로 초기화 시킬 필요가 없으면 굳이 안씀
	ralloc(ptr, 2000) : 재할당,  먼저 1000을 할당 후 2000을 재할당하면 먼저 1000뒤에 1000의 빈공간이 있는지 확인함
	 -> 없으면 새로운 2000의 빈공간에 할당 후 기존의 1000의 내용을 새로운 2000에 복붙하고 기존의 1000을 자동으로 삭제후 반환해줌

	구조체가 힙세그먼트를 자주 이용함?
	상수는 대부분 데이타 세그먼트에 자리잡음
*/

int main()
{
	char* ptr;
	while (1)
	{
		ptr = (char*)malloc(100);
		if (ptr == NULL)
		{
			perror("Error : ");
			exit(1);
		}

		printf("input string ? ");
		gets(ptr);
		if (strcmp(ptr, "end") == 0)
			break;
		printf("%p, %s \n", ptr, ptr);

		free(ptr);//두번 해제하면 오류로 프로세스 죽음
	}// 루프문안에서 free(ptr)을 하지 않으면 메모리가 계속 새로할당되다가 마지막에 end를 쳤을때 그 메모리만 해제된다.
	//printf("%p, %s \n", ptr, ptr);//해제된 메모리는 이미 반환되어서 쓰레기값이 들어감
	ptr = NULL; // 포인터의 값을 잃어버려서 메모리의 누수가 발생한다.-> 사용도 못하고 해제도 못한다.

	return 0;
}