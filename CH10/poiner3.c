//pointer3.c
#include<stdio.h>
#include<string.h>
/*
포인터 1증가가 타입이 맞게끔 증가해야하는 이유 " 배열의 원소일 수도 있기 때문

대괄호[]의 진실
num[2] => 300
대괄호인 첨자는 컴파일의 과정에서 식변환이 일어남
[ => +
] => *()
num[2] => num+2] => *(num+2)
num은 배열의 시작주소만 안다

int X[10]={1,2,...10}, Y[10];
Y=X (X) => Y가 포인터 '상수' 이므로 받을 수가 없다.
*/

int main()
{
	int num[5] = { 100,200,300,400,500 }; //포인터 상수 = 주소를 바꿀 수 없다.
	int * ptr; // 포인터 변수 = 주소를 바꿀 수 있다.
	int i;


	/*for (i = 0; i < 5; i++)
		printf("%p: %d \n", &num[i], num[i]);*/

	ptr = num;

	printf("\n");
	for (i = 0; i < 5; i++)
		printf("%p: %d, %d, %d %d \n",
			&num[i]/* = num+i */, num[i], *(ptr + i), *(num + i),ptr[i]); //연산의 우선순위가 가감보단 포인터가 높기때문에 괄호 필수!!!! - !책495P!
	printf("\n");// 

	char str[20] = "kingdom", * p2;
	p2 = str;
	printf("%c, %c, %c, %c \n", str[0], *(str + 0), *(str + 1), *p2);
	printf("%p, %s, %s \n", str, str, p2);

	//num : 첨자가 없는 배열변수는 그 배열이 할당된 메모리의 시작주소를 갖는 포인터 상수이다. ->상수라서 불가능
	//p2 사용하여 k,i,n,g,d,o,m 을 출력
	/*for (i = 0; i < strlen(p2); i++)
	{
		printf("%c, ", *(p2 + i));
	}*/
	printf("\n"); // or

	while (*p2)
	{
		printf("%c ,", *p2);
		p2++;
	}// 이 방법 알아두기( 짧음)


	return 0;
}