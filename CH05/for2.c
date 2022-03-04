//for2.c

#include <stdio.h>

//키보드로 부터 start와 end를 입력받아
//start 와 end 간의 합을 구하시오
/*
start ? 1
end ? 100
1부터 100 가지의 합 : ???
*/
int main()
{
	//1. 변수선언
	int i, sum = 0, start, end;
	int buffer,count;

	//2. 데이터 입력(start, end)
	printf("start ? ");
	scanf("%d",&start);
	printf("end ? ");
	scanf("%d",&end);

	if (start > end)
	{
		buffer = start;
		start = end;
		end = buffer;
	}


	//3. 합
	for (i = start; i <= end; i++)
	{

		sum += i;
		if (sum >= 3000)
		{
			break;
		}

	}


	//4.합 출력
	if(i-1==end)
		printf("%d 부터 %d 까지의 합 : %d \n", start, end, sum);
	else
		printf("%d 부터 %d 까지의 합 : %d \n", start, i, sum);

	return 0;
}