//pointer5.c
#include<stdio.h>
#include<string.h>
/*
	포인터 배열
*/
// char *strcpy(char* strDestination, const char* strSource);
void myStrcpy(char* to, char* from); //참조 반환이니까 값을 반환하지 않아도 된다!!!!


int main()
{
	char s1[20] = "kingdom", s2[20], s3[20], s4[20];

	strcpy(s2, s1);

	printf("s1 : %s, s2 : %s \n", s1, s2);

	myStrcpy(s3,s1);
	printf("s1 : %s, s2 : %s \n", s1, s3);

	strcpy(s4, "multi campus"); // char ch = "sss"은 문자열 상수이므로 주소값을 반환한다.
	printf("s4 : %s\n", s4);
	return 0;
}

void myStrcpy(char *to, char *from) //참조 반환이니까 값을 반환하지 않아도 된다!!!!
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
		from++; // from이 문자열 상수이므로 문자갯수만큼 일렬로 주소를 할당 받는다.
	}
	*to = '\0';
	//*to = ""; //안됨

}