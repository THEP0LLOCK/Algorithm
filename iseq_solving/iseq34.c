#include <stdio.h>
int main(void)
{
	int m, n;
	scanf("%d%d", &m, &n);
	int i;
	for (i = m; i <= n; i++) {
		int isprime = 1;
		for (int j = 2; j < i; j++)
			if (i % j == 0) {
				isprime = 0;
				break;
			}

		if (isprime)
			printf("%d ", i);
	}

	return 0;
}