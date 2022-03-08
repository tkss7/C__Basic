//pointer2.c
#include<stdio.h>
// 4GB가 4byte로 다 처리된다?..
//주소값표현 = 16의 8승 =2의 32승 =42억 머시기
// //4GB안에서 2byte, 3byte도 충분하지만 OS가 4byte면 된다하고 정한건가??
// 주소값이 16진수로 최댓값을 10진수로 변환하면 4,294,967,295임, 포인터가 4byte로 할당받으니
// 4byte를 int형 변수 범위로 치환하면4,294,967,295임 즉 같으므로 포인터의 할당받는 메모리 크기는 4byte가 적당하다!!!!
// 32bit 운영체제는 2의 32승은 4,294,967,295임 따라서 4byte가 적당하다.
//포인터 연산 : +, ++, -, --(포인터 변수의 자료형 크기만큼 증감) !!!!!!!!!!!!!!!!
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

	ch++, num++, fnum++, dnum++; //값의 연산
	cp++, ip++, fp++, dp++; //포인터 연산

	printf("%c, %d, %f, %lf \n", ch, num, fnum, dnum);
	printf("%p, %p, %p, %p \n", cp, ip, fp, dp);



	return 0;
}