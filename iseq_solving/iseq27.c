#include <stdio.h>
int main(void)
{
	int x, y;
	int tmp;
	scanf("%d %d", &x,&y);
	for (int i = x; i < y; i++) {
		tmp = i - (i / 10 * 10);
		if (tmp %3 = 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}