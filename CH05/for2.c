//for2.c

#include <stdio.h>

//Ű����� ���� start�� end�� �Է¹޾�
//start �� end ���� ���� ���Ͻÿ�
/*
start ? 1
end ? 100
1���� 100 ������ �� : ???
*/
int main()
{
	//1. ��������
	int i, sum = 0, start, end;
	int buffer,count;

	//2. ������ �Է�(start, end)
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


	//3. ��
	for (i = start; i <= end; i++)
	{

		sum += i;
		if (sum >= 3000)
		{
			break;
		}

	}


	//4.�� ���
	if(i-1==end)
		printf("%d ���� %d ������ �� : %d \n", start, end, sum);
	else
		printf("%d ���� %d ������ �� : %d \n", start, i, sum);

	return 0;
}