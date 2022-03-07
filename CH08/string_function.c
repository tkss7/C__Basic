//string_function.c
#include<stdio.h>
#include<string.h>
/*
strcpy(to from); : from�� ���ڿ��� to�� ����
strcat(to from) : from�� ���ڿ��� to �ڿ� ����
strlen(str) : str�� ���ڿ� ���̸�ǥ��
strcmp(str1, str2) : �� ���ڿ��� ���Ͽ� ���� �� �ϳ��� Return value�� ��ȯ
					0 : str1, str2 �� ���ڿ��� ����.
					��� : str1�� str2 ���� ũ��. == str1�� ũ��
					���� : str1�� str2 ���� �۴�. == str2�� ũ��

���ڿ� �� : ù��° ���ڿ� ���� �ƽ�Ű�ڵ� ���� ���Ͽ� ũ�� ū����
*/
int main()
{
	char s1[20] = "king", s2[20] = "";

	printf("s1 : %s, s2 : %s \n", s1, s2);

	printf("%d, %d \n", sizeof(s1), strlen(s1));

	strcpy(s2, s1); //s2 = s1 �� ���� �����̶� ���� ��
	printf("%s, %s \n", s1, s2);

	do {
		printf("input s1 ? ");
		gets(s1);//dom ==> dom\0
	} while (strlen(s1) + strlen(s2) >= sizeof(s2));


	strcat(s2, s1); //�迭�� ��踦 �˻����� ����
	printf("%s, %s \n", s1, s2);

	printf("%d \n", strcmp(s1, s2));
	printf("%d \n", strcmp(s2, s1));
	printf("%d \n", strcmp("apple", "apple"));
	printf("%d \n", strcmp("Apple", "apple"));
	printf("%d \n", strcmp(s2, "kingdom"));

	return 0;
}