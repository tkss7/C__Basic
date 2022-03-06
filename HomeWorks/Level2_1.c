#include <stdio.h>
#include <math.h>

double GetDistance(int x1, int x2, int y1, int y2);

int main()
{
	double distance;
	int x1, x2, y1, y2;

	printf("ù ���� ��ǥ, x1,y1? ");
	scanf("%d%d", &x1, &y1);

	printf("�� ��° ��ǥ, x2,y2? ");
	scanf("%d%d", &x2, &y2);

	//�Լ�ȣ��� ��ȯ �� ����
	distance = GetDistance(x1, x2, y1, y2);
	printf("�� �� ������ �Ÿ� : %lf \n", distance);

	return 0;
}

double GetDistance(int x1, int x2, int y1, int y2)
{
	double dist;

	dist = sqrt((double)((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));

	return dist;
}