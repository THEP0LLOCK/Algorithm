#include <stdio.h>
#define PI 3.14
int main(void)
{
	double x;
	scanf("%lf", &x);
	printf("%.2lf %.2lf",2*x*PI,x*x*PI);

	return 0;
}