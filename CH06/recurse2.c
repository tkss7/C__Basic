#include <stdio.h>

// ����Լ� �� ���ǹ��� ù�ٿ� �� �� ������(��Ģ��)���� �����Ͽ��ٰ�  else���� ���� �� �����ߴ� ���� ��ŭ ���������� ���ƿ�
//���� ����Լ� sum��  sum(i+1)�̶�� 1�� �����Ͽ��ٰ� �ٽ� ���ƿ´�






           ///\ 
          ///  \
         ///    \
/  �������      \ ��������(����������� �ٽ� ���ƿ� )




int sum_func(int count);
int main()
{
	printf("1 ���� 5 ������ ��: %d \n", sum_func(1));

	return 0;
}

int sum_func(int count)
{
	if (count<5)
		return count + sum_func(count+1);
	else
		return count;
}