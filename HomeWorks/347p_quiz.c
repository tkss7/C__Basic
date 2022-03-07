//347p_quiz.c
#include<stdio.h>
#include<string.h>

/*
strstr(str1,str2) =str1에서 str2를 찾고 찾으면 찾은 문자열의 시작주소 반환
strupr() = 모두 대문자로 치환
strlwr() = 모두 소문자로 치환
toupper() = 한문자 대문자로 변환
tolower() = 한문자 소문자로 변환
strcpy(to, from) = from을 to로 문자열 복사
strcmp(x1, x2) = x1과 x2 비교, 같으면 0, x1이 크면 양수, x2가 크면 음수
strlen() = 문자열 길이 알아냄
strcat(to, from) = from이 to에 합쳐짐
*/

int main()
{
	char color[5][10] = { "Red","Green","Yellow","Blue","Black" };
	char str[10], tmp_str[10], tmp_color[10], answer;
	int i;

	while (1)
	{
		printf("\n색상입력 ? ");
		gets(str);
		strcpy(tmp_str, str);
		for (i = 0; i < 5; i++)
		{
			strcpy(tmp_color, color[i]);
			if (strcmp(strupr(tmp_str), strupr(tmp_color)) == 0)
			{
				printf("color[%d] 행에서 검색: %s\n", i, color[i]);
				break;
			}
		}
			if (i == 5)
				printf("%s 색상은 color 배열에 포함되어 있지 않습니다. \n",str);
		
		do {
			printf("계속 할까요? (y/n) ");
			answer = toupper(getchar());  // toupper() => 한문자 대문자로 출력, tolower() => 한문자 소문자로 출력
			if (answer == 'Y')
				continue;
			else if (answer == 'N')
				exit(0);
			else
				printf("올바르지 않은 답변입니다.");
			while (getchar() != '\n');

		} while (answer != 'Y' && answer != 'N');
		while (getchar() != '\n');

	}// while(1) end



	return 0;
}