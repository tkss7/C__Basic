#include <stdio.h>

int main(void)
{
    printf("%d \n",555);
    printf("/%d/ \n",555); // /사이에 찍음
    printf("/%d/%c%c", 555,10,13); // /사이에 찍음  10 == LF , 13 == CR
    printf("/%10d/ \n",555); //오른쪽정렬
    printf("/%-10d/ \n",555); //왼쪽정렬
    printf("/%010d/ \n\n",555); //00000 어쩌구로 나옴

    printf("/%f/ \n",8192.1978);
    printf("/%13f/ \n",8192.1978);
    printf("/%13.2f/ \n",8192.1978);
    printf("/%-13.2f/ \n\n",8192.1978);

    printf("%c %d %c %d \n",'A','A',97,97);
    printf("%s \n", "C Language...");
    printf("%25s\n", "C Language...");  // 정렬하고 싶을때 씀
    printf("%.5s \n\n", "C Language..."); //5자리까지 짜르고 싶다

    printf("%d %o %x \n",67,67,67);  // %o =8진수 
    printf("%d %#o %#x \n",067,067,067); // 8진수 3개를 10,8,16진수로 바꿔라  %#을 쓰면 형식을 디스플레이 해줌!!!!
    printf("%d %#o %#x \n",0x67,0x67,0x67); //16진수 3개를 10,8,16진수로 바꿔라

	 return 0 ;
}

