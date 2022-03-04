#include <stdio.h>

// 재귀함수 는 조건문의 첫줄에 쓸 시 순차적(규칙적)으로 증가하였다가  else문을 만난 후 증가했던 값들 만큼 순차적으로 돌아옴
//만약 재귀함수 sum이  sum(i+1)이라면 1씩 증가하였다가 다시 돌아온다






           ///\ 
          ///  \
         ///    \
/  출발지점      \ 도착지점(출발지점으로 다시 돌아옴 )




int sum_func(int count);
int main()
{
	printf("1 부터 5 까지의 합: %d \n", sum_func(1));

	return 0;
}

int sum_func(int count)
{
	if (count<5)
		return count + sum_func(count+1);
	else
		return count;
}