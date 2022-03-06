#include <stdio.h>

int main()
{
	double x, result;

	printf("x? ");
	scanf("%lf", &x);

	result = (5 *x*x*x) + (6 * x*x) + (7*x);

	printf("result : %lf \n", result);

	return 0;
}