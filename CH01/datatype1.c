#include <stdio.h>
#define EQ  "============"          //��ũ�� ���
#define MSG "���Ǵ�Ʈ�ｺ�ɾ�"      //��ũ�� ���
#define SUM(x,y) x+y                 //��ũ�� �Լ�
int main()
{/*��������: ����� �ڷ����� ũ�⸸ŭ �޸𸮸� �Ҵ��ϰ�,
	�����Ϸ����� �ڷ����� �˸���.*/
	
	char ch;
	int num = 100; //���� �ʱ�ȭ

	double dnum;


	printf("c ����� �ڷ���(DataType) \n");

	ch = 'A'; //ch = "A"; ���ڿ�(2byte �Ҵ������ C���� ���ڿ��� �迭�� ����ؾ��Ѵ�.
	num = 200;
	dnum = 1.5;
	const float PI = 3.141592F; // ������ ���ȭ(�ݵ�� �ʱ�ȭ�� �Ͼ�� ��)
	//PI = 15.7;
	//A, 100, 1.500000
	printf("ch : %c, num : %d, dnum : %1f \n", ch, num, dnum);
	printf("PI : %f \n", PI);
	//printf("���� :  % d, ���� : % c \n", 100, 'Z');
	//printf("%d + %d = %d \n", 100, 200, 100 + 200);

	printf("%s \n", EQ);
	printf("%s \n", MSG);
	printf("�� : %d \n", SUM(100,300));


	return 0;
}