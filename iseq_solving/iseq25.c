#include <stdio.h>
int main(void) {
	int num;
	int count = 1;
	scanf("%d", &num);
	int tmp = num;
	int y = 0;

	for (int x = num; x > 0; x--) {
		for (int a = 0; a < y - 4; a++) printf(" ");
		for (y = 0; y < tmp; y++) {
			printf("%d", y + count);

		}

		printf("\n");
		tmp--;
		count++;
	}

	return 0;
}