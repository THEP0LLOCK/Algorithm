#include <stdio.h>
int main(void)
{
	int num;
	scanf("%d", &num);
	int a, b;
	int rapid = 1;
	int space = (2 * (num - 1)) + 2;

	for (int a = 0; a < num; a++) {
		for (int c = 0; c < space; c++)
		{
			printf(" ");
		}
		for (int b = 0; b < rapid; b++) {
			printf("* ");
		}
		rapid = rapid + 2;
		printf("\n");
		space = space - 2;
	}


	return 0;
}