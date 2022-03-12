#include <stdio.h>
int main(void)
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d", x + y);
	if ((x + y) >= 140) printf(" 합격");
	else printf("불합격");

	return 0;
}