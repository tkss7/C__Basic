#include <stdio.h>

int main()
{
	char ch;       //A
	short int n1;   //100
	int n2;        //200
	long int n3;   //300
	float fnum;    //1.1
	double dnum;   //2.5

 

	printf("input short int ? ");
	scanf("%hd", & n1); //100

	printf("input char ? ");
	scanf(" %c", &ch);  //공백 지정자 : 입력버퍼의 공백, [enter], [tab]을 버린다.

	printf("input  int ? ");
	scanf("%d", & n2);

	printf("input long  int ? ");
	scanf("%ld", & n3);
	
    printf("input float ? ");
	scanf("%f",&fnum);

    printf("input double ? ");
	scanf("%lf",&dnum);

	printf("%c, %hd, %d, %ld, %f,  %lf \n",
		              ch, n1, n2, n3, fnum, dnum );

	return 0 ;
}
