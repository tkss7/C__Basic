//pointer2.c
#include<stdio.h>
// 4GB�� 4byte�� �� ó���ȴ�?..
//�ּҰ�ǥ�� = 16�� 8�� =2�� 32�� =42�� �ӽñ�
// //4GB�ȿ��� 2byte, 3byte�� ��������� OS�� 4byte�� �ȴ��ϰ� ���Ѱǰ�??
// �ּҰ��� 16������ �ִ��� 10������ ��ȯ�ϸ� 4,294,967,295��, �����Ͱ� 4byte�� �Ҵ������
// 4byte�� int�� ���� ������ ġȯ�ϸ�4,294,967,295�� �� �����Ƿ� �������� �Ҵ�޴� �޸� ũ��� 4byte�� �����ϴ�!!!!
// 32bit �ü���� 2�� 32���� 4,294,967,295�� ���� 4byte�� �����ϴ�.
//������ ���� : +, ++, -, --(������ ������ �ڷ��� ũ�⸸ŭ ����) !!!!!!!!!!!!!!!!
/*
ex) 5000 + 1 => 5001(X)
				5004(Array)
*/
int main()
{
	char ch= 'A', *cp;
	int num = 100, * ip;
	float fnum = 1.1, * fp;
	double dnum = 5.8, * dp;



	printf("%c, %d, %f, %lf \n", ch, num, fnum, dnum);
	printf("%p, %p, %p, %p \n", &ch, &num, &fnum, &dnum);
	cp = &ch;
	ip = &num;
	fp = &fnum;
	dp = &dnum;
	*cp = 'B';
	printf("\n%c, %d, %f, %lf \n", *cp, *ip, *fp, *dp);
	printf("%p, %p, %p, %p \n", cp, ip, fp, dp);

	ch++, num++, fnum++, dnum++; //���� ����
	cp++, ip++, fp++, dp++; //������ ����

	printf("%c, %d, %f, %lf \n", ch, num, fnum, dnum);
	printf("%p, %p, %p, %p \n", cp, ip, fp, dp);



	return 0;
}