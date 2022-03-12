#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num=0;
	int numsum=0;
	int nc=0;
	while (1) {
		scanf("%d", &num);
		if (num == 0) break;
		numsum = numsum + abs(num);
		nc++;
	}
	printf("%d\n", numsum);
}