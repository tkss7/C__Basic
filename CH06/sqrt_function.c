//sqrt_function.c
#include <stdio.h>
#include <math.h> //�����Լ��� ���õ� �Լ��� ������ �������


int main()
{
	int N;

	printf("input N ? ");
	scanf("%d", &N);

	printf("%d�� ������ : %lf \n",N, sqrt((double)N)); //math.h ���ϸ� �Լ������� �ȵǹǷ� 
	                                                   //int���̶� �����Ͽ� ������ �����ʴ� ������ �߻��� -> �����Ⱚ ǥ��

	return 0;
}