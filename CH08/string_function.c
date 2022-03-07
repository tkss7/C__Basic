//string_function.c
#include<stdio.h>
#include<string.h>
/*
strcpy(to from); : from의 문자열을 to에 복사
strcat(to from) : from의 문자열을 to 뒤에 결합
strlen(str) : str의 문자열 길이를표시
strcmp(str1, str2) : 두 문자열을 비교하여 다음 중 하나의 Return value를 반환
					0 : str1, str2 두 문자열이 같다.
					양수 : str1이 str2 보다 크다. == str1이 크다
					음수 : str1이 str2 보다 작다. == str2가 크다

문자열 비교 : 첫번째 문자열 부터 아스키코드 값을 비교하여 크면 큰것임
*/
int main()
{
	char s1[20] = "king", s2[20] = "";

	printf("s1 : %s, s2 : %s \n", s1, s2);

	printf("%d, %d \n", sizeof(s1), strlen(s1));

	strcpy(s2, s1); //s2 = s1 과 같은 형식이라 보면 됨
	printf("%s, %s \n", s1, s2);

	do {
		printf("input s1 ? ");
		gets(s1);//dom ==> dom\0
	} while (strlen(s1) + strlen(s2) >= sizeof(s2));


	strcat(s2, s1); //배열의 경계를 검사하지 않음
	printf("%s, %s \n", s1, s2);

	printf("%d \n", strcmp(s1, s2));
	printf("%d \n", strcmp(s2, s1));
	printf("%d \n", strcmp("apple", "apple"));
	printf("%d \n", strcmp("Apple", "apple"));
	printf("%d \n", strcmp(s2, "kingdom"));

	return 0;
}