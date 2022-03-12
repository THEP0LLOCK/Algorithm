#include <stdio.h>
int main(void) {
	int num;
	scanf("%d", &num);

	int rapid = 1;
	int count =0;

	for (int a = 0; a < num; a++) {
		for (int b = 0; b < rapid; b++) {
			count++;
			printf("%d", count);
		}
		rapid++;
		printf("\n");
		count = 0;
	}

	return 0;
}