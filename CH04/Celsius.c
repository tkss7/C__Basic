#include <stdio.h>
#include <ctype.h>
/*

����(3��) ������
���� : ���ǽ� ? ��1 : ��2
���� : ���ǽ� ? ��1 : ��2

������ : ��޾� ����� �ٲٴ� ����

��ŷ : ����ڰ� ������ ������Ʈ���ϵ�� ���̺귯���Լ��� �����Ͽ� �������ϻ���

��ó���۾� : ��ó�������ڰ� ��ó������ �ؼ��Ͽ� ��ó�� �� �ڵ带 ����
*/
int main(){

	char celsius;
	int tmp, out;

	printf("ȭ���̸� F, �����̸� C �Է� : ");
	scanf("%c", &celsius);
	celsius = toupper(celsius);

	printf("%s �µ� ? ", celsius=='F' ? "ȭ��" : "����" );
	scanf("%d", &tmp);

	out = celsius == 'F' ? (tmp - 32)/1.8 : (tmp * 1.8) + 32;

	printf("\n%s�� %s�� ��ȯ : %d \n", celsius=='F'?"ȭ��":"����", celsius == 'F' ? "����" : "ȭ��",out);

	return 0;
}