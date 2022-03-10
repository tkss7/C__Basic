//struct4.c
#include<stdio.h>
#include<math.h>

struct Point
{
	double x;
	double y;
};
double GetDistance(struct Point p1, struct Point p2);
double GetDistance(struct Point p1,struct Point p2)
{
	double dist;

	dist = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));

	return dist;
}

int main()
{
	double Distance;

	struct Point p1 = { 430,170 };
	struct Point p2 = { 120,80 };

	Distance = GetDistance(p1, p2);

	printf("�� �� ������ �Ÿ� : %lf \n",Distance);


	return 0;
}