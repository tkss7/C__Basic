//double_pointer1.c
#include<stdio.h>
funcA(char** tmp);
int main()
{
	//단항 연산자 : 결합방향 우 -> 좌
	//*p : 단일포인터 :내가 보관중인 주소를 한번만 참조하면 데이터가 있어야 한다.
	//**mip : 이중포인터 : 내가 보관중인 주소를 한번만 참조하면 주소,
	//                            두번 참조해야 데이터가 있어야한다.
	//이중포인터 : 포인터가 저장된 시작주소를 데이터로 저장
	// Heap 세그먼트 ex) 동적할당 을 사용할때 이중포인터가 사용된다.
	// 포인터 배열을 많이쓸수록 메모리가 적게들고 효율적으로 가능하다.
	//포인터배열을 부모함수에서 넘기면 이중포인터로 받으면 됨
	int num, * ip, ** mip;
	printf("%d, %d, %d \n", sizeof(num), sizeof(ip), sizeof(mip));
	
	ip = &num;
	mip = &ip;

	**mip = 500;

	printf("%d, %d, %d \n\n", num, *ip, **mip);

	char* ptr[] = { "kingdom","multi campus","hello world"
	"one 하나","two 둘","seoul 서울시 강남구 역삼동 100"
, "busan 부산시 해운대구 해운대동 200",NULL };
	//printf("sizeof p1 : %d \n", sizeof(p2));
	// 데이터를 가리킬때에는 항상 그 데이터의 크기만큼만 가리킴 ==char 면 1 , int 면 4
	funcA(ptr);

	return 0;
}
//ptr에 저장된 문자열 출력
funcA(char **tmp)
{
	int i,len=0;
	char* ptr;
	//printf("funcA() : %p, %d \n",tmp,sizeof(tmp));
	printf("funcA() : %p, %x \n", tmp, *tmp);
	for (i = 0; *(tmp + i); i++)
	{

		ptr = *(tmp + i); // ex) 7000번지의 주소를 받음
		while (*ptr!='\0')
		{
			len++;
			ptr++;
		}
		printf("%u : %u : %s, Length: %d \n", tmp + i, *(tmp + i), *(tmp + i),len);
		len = 0;
	}

}