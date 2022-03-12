#include <stdio.h>

int main(void)
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	printf("%d %d" ,x + y + z,(x + y + z)/3);

	if (((x + y + z) / 3) >= 90) printf(" 수");
	else if (((x + y + z) / 3) >= 80) printf(" 우");
	else if (((x + y + z) / 3) >= 70) printf(" 미");
	else if (((x + y + z) / 3) >= 60) printf(" 양");
	else  printf(" 가");


	return 0;
}