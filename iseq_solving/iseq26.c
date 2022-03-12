#include <stdio.h>
int main(void)
{
	int num;
	scanf("%d", &num);

	for (int x = 0; x < 9; x++) {
		printf("%d * %d = %d\n", num, x+1, num * (x+1));
	}


	return 0;
}