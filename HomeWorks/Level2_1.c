#include <stdio.h>
#include <math.h>

double GetDistance(int x1, int x2, int y1, int y2);

int main()
{
	double distance;
	int x1, x2, y1, y2;

	printf("첫 번쨰 좌표, x1,y1? ");
	scanf("%d%d", &x1, &y1);

	printf("두 번째 좌표, x2,y2? ");
	scanf("%d%d", &x2, &y2);

	//함수호출과 반환 값 저장
	distance = GetDistance(x1, x2, y1, y2);
	printf("두 점 사이의 거리 : %lf \n", distance);

	return 0;
}

double GetDistance(int x1, int x2, int y1, int y2)
{
	double dist;

	dist = sqrt((double)((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));

	return dist;
}