#include <stdio.h>
#define REPEAT 3
int main(void)
{
	int x[REPEAT];

	for (int i = 0; i < REPEAT; i++) {
		scanf("%d", &x[i]);
	}

	for (int i = 0; i < REPEAT; i++) {
		if (x[i] % 2 == 1)
			printf("¦��\n");
		else printf("Ȧ��\n");
	}

	return 0;
}