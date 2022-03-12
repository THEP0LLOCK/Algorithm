#include <stdio.h>
int main(void)
{
	int x;
	int result = 0;

	scanf("%d", &x);

	for (int i = 0; i < x; i++)
		if (i % 3 == 0) {
			result = result + i;
		}
	printf("%d", result);
	return 0;
}