//if2.c
#include <stdio.h>
//Ű����� ���� �� ���� �Է¹޾� ū ���� ���Ͽ� ����Ͻÿ�

int main()
{
	int x, y, z, max;

	printf("�� ���� �Է��Ͻÿ� : ");
	scanf("%d%d%d", &x, &y, & z);
	printf("x : %d, y : %d, z : %d \n", x, y, z);

	//ū���� max�� ����
	
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

	//3�׿�����
	//max = (x > y ? x : y);
	//max = (max > z ? max : z);



	printf("max : %d", max);

	return 0;
}