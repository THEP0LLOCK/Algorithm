#include <stdio.h>
int main(void)
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d", x + y);
	if ((x + y) >= 140) printf(" �հ�");
	else printf("���հ�");

	return 0;
}