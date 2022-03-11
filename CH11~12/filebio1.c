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
	int i = 0;
	FILE* fp;
	STUDENT tmp, stu[3] = {
		{ "진달래",89,100,30 },
		{ "이몽룡",100,75,50 },
		{ "성춘향",68,83,67 }
	};
	//Save
		
		fp = fopen("data4.dat","ab");

		if (fp == NULL)
		{
			printf("file open error. \n");
			exit(1);
		}

		//stu.avg = (float)(stu.kor + stu.eng + stu.mat) / 3;

		//fwrite(stu, sizeof(stu), 1, fp);// stu주소로 부터 stu의 사이즈를 1개 받아서 fp에 넣어주세요
		fwrite(stu, sizeof(STUDENT), 3, fp);// 3개가 동시에 들어감 ,  몇개가 들어올지 모르니까 아래식의 코드를 권장함
		
		fclose(fp);
	
	//Load
	
	fp = fopen("data4.dat", "rb"); //오픈하여 파일의 첫줄 첫칸을 가리킨다

	if (fp == NULL)
	{
		printf("file open error. \n");
		exit(1);
	}
	
	while(1)
	{  //fread는 더이상 읽울게 없으면 3번쨰 인자가 아닌 것을 반환한다.
		if (fread(&tmp, sizeof(STUDENT), 1, fp) != 1)// 자료형 구분없이 한번에 잡아다 끌어오므로 속도가 빠르지만 txt파일이 아니라 눈으로 확인은 불가능하다
			break;
					//꼭 txt파일이어야 할 필요가 없다면 대부분 이진 스트림을 사용한다
		printf("%s, %d, %d, %d, %.2f \n", tmp.name, tmp.kor, tmp.eng, tmp.mat, tmp.avg);
	
	}
	

	//fread(&tmp, sizeof(tmp[0]), 4, fp);
	//for(i=0;i<4;i++)
	//	printf(" %s, %d, %d, %d, %.2f \n", tmp[i].name, tmp[i].kor, tmp[i].eng, tmp[i].mat, tmp[i].avg);

	

	fclose(fp);
	return 0;
}