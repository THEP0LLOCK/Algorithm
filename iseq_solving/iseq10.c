#include <stdio.h>
int main(void)
{
	int x, y, z;
	scanf("%d %d %d", &x, &y ,&z);
	printf("%d", (x > y ? x : y) > z ? (x > y ? x : y) : z);

	return 0;
}