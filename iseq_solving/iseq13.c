#include <stdio.h>

int main(void)
{
	int m[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int r;

	while(1) {
		scanf("%d", &r);
		if (r == 0) break;
		if (r >= 13) printf("%d - 99\n", r);
		else printf("%d - %d\n", r, m[r]);
	}

	return 0;
}