//if2.c
#include <stdio.h>
//키보드로 부터 세 수를 입력받아 큰 수를 구하여 출력하시오

int main()
{
	int x, y, z, max;

	printf("세 수를 입력하시오 : ");
	scanf("%d%d%d", &x, &y, & z);
	printf("x : %d, y : %d, z : %d \n", x, y, z);

	//큰수를 max에 저장
	
	if (x > y)
		if (x > z)
		{
			max = x;
		}
		else
			max = z;
	else
	{
		if (y > z)
		{
			max = y;
		}
		else
			max = z;
	}

	//3항연산자
	//max = (x > y ? x : y);
	//max = (max > z ? max : z);



	printf("max : %d", max);

	return 0;
}