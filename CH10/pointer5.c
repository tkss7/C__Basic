//pointer5.c
#include<stdio.h>
#include<string.h>
/*
	������ �迭
*/
// char *strcpy(char* strDestination, const char* strSource);
void myStrcpy(char* to, char* from); //���� ��ȯ�̴ϱ� ���� ��ȯ���� �ʾƵ� �ȴ�!!!!


int main()
{
	char s1[20] = "kingdom", s2[20], s3[20], s4[20];

	strcpy(s2, s1);

	printf("s1 : %s, s2 : %s \n", s1, s2);

	myStrcpy(s3,s1);
	printf("s1 : %s, s2 : %s \n", s1, s3);

	strcpy(s4, "multi campus"); // char ch = "sss"�� ���ڿ� ����̹Ƿ� �ּҰ��� ��ȯ�Ѵ�.
	printf("s4 : %s\n", s4);
	return 0;
}

void myStrcpy(char *to, char *from) //���� ��ȯ�̴ϱ� ���� ��ȯ���� �ʾƵ� �ȴ�!!!!
{

	int i = 0;
	//while (*from)
	//{

	//	*(to+i) = *(from+i);
	//	i++;
	//	
	//}
	while (*from)
	{
		*to = *from;
		to++;
		from++; // from�� ���ڿ� ����̹Ƿ� ���ڰ�����ŭ �Ϸķ� �ּҸ� �Ҵ� �޴´�.
	}
	*to = '\0';
	//*to = ""; //�ȵ�

}