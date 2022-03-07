//array4.c
#include<stdio.h>
#include<string.h>
/* 문자열(문자배열)
ch 32 == 공백문자
ch 0 == NULL 문자 , 공백과 다름!!
%s == 내가 받은 주소로 부터 NULL문자까지 찍어줄게!!!

char str[10] ="King\0dom" //으로 하면 NULL문자 전까지 찍으므로 %s, str로 했을때 KIng만 출력함!!!!!!
배열을 다시쓸 때 전부 초기화 하고 쓰는게 아니라 덮어씌우는 효과여서 
"kingdom" 입력 후 "cam"만 쓰면 cam\0dom이 남아서 나머지부분에 쓰레기 값이 저장된다.

gets()는 무조건 [enter]입력을 찾아 그 값을 NULL로 변경한다.

C언어는 배열의 경계를 검사하는건 개발자의 몫이다.
ex) 입력받을때 배열의 시작주소에 입력받으므로 할당한 메모리를 벗어나면 런타임 오류가 떠서 프로세스가 죽는다.

*/

int main()
{
	char ch = 'A';
	char str[10] = "King dom";
	char tmp[100];
	//char str[10] ="King\0dom" //으로 하면 NULL문자 전까지 찍으므로 %s, str로 했을때 KIng만 출력함!!!!!!
								// 입력받는건 NULL문자 까지 받음

	printf("%d, %d, %d \n", sizeof(ch), sizeof(str[0]),sizeof(str) );
	printf("%c, %c, %p, %p \n", ch, str[0], &str[0], str);

	printf("%p, %s %s \n\n", str, str, str + 4); //%s로 str+4 는 배열의 시작주소 +4로 부터 NULL문자(전)까지 찍음
	do {
		printf("input string ? ");
		//scanf("%s", str); //cam pus[enter] => scanf는 공백으로 구분하므로 cam , pus 두개로 입력했다 생각해서 cam만 출력
		gets(tmp); //cam pus[enter] -> \0

	} while (strlen(tmp)>=sizeof(str)); // 문자열을 직접 입력받지않고 임시 버퍼를만 들어서 입력받고 비교하는게 좋다.
	strcpy(str, tmp);

	printf("str : %s \n", str);
	printf("\n");
	for (int i = 0; i < 10; i++)
		printf("%p, %c, %d \n", &str[i], str[i], str[i]);



	return 0;
}