//fileio5.c
#include<stdio.h>
#include<stdlib.h>

/*
	fscanf(FILE*,char *, ...) : ...  이 있으면 : 가변인자를 갖는 함수
	텍스트 스트림 : 만든 파일을 바로바로 볼 수 있음 ( r,rt,w,wt,a,at )
					다른 용도의 데이터로도 쓸 수 있음
					내부적 변환작업으로 인해 속도(성능)가 떨어진다.

	이진 스트림 : 변환작업이 없음 -> 속도가 빠르다. (rb,wb,ab)
				  이진 파일이므로 알아 볼 수가 없다.
				  다른용도로 사용 불가능 -> 애플리케이션 용으로만 쓸 수 있다.

*/

typedef struct ST_STUDENT
{
	char name[20];
	int kor;
	int eng;
	int mat;
	float avg;
}STUDENT;

int main()
{
	FILE* fp;
	STUDENT stu = { "홍길동",89,91,70 },tmp;
//Save
	/*
	fp = fopen("data3.txt","wt");

	if (fp == NULL)
	{
		printf("file open error. \n");
		exit(1);
	}

	stu.avg = (float)(stu.kor + stu.eng + stu.mat) / 3;
	
	
	fprintf(fp, "%s %d %d %d %f", stu.name, stu.kor, stu.eng, stu.mat, stu.avg); //(3)메모리에 있는 데이터들을
	//fprintf((1),(2),(3));														//(2)자료형 지정자에 맞춰서 (1)파일 스트림에 넣어주세요
	
	fclose(fp);
*/
	//Load
	fp = fopen("data3.txt", "rt"); //오픈하여 파일의 첫줄 첫칸을 가리킨다

	if (fp == NULL)
	{
		printf("file open error. \n");
		exit(1);
	}

	fscanf(fp, "%s %d %d %d %f"/*<-문자열상수이므로 주소값임*/, tmp.name, &tmp.kor, &tmp.eng, &tmp.mat, &tmp.avg); //(1)파일 스트림에서 꺼내어
	//fscanf((1),(2),(3));																//(2)자료형 지정자에 맞춰서(3)메모리에 넣어주세요

	fclose(fp);

	printf("%s, %d, %d, %d, %.2f \n", tmp.name, tmp.kor, tmp.eng, tmp.mat, tmp.avg);

	return 0;
}