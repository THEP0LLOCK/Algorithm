#include <stdio.h>

int main(void)
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	printf("%d %d" ,x + y + z,(x + y + z)/3);

	if (((x + y + z) / 3) >= 90) printf(" ��");
	else if (((x + y + z) / 3) >= 80) printf(" ��");
	else if (((x + y + z) / 3) >= 70) printf(" ��");
	else if (((x + y + z) / 3) >= 60) printf(" ��");
	else  printf(" ��");


	return 0;
}