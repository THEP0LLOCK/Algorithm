#include <stdio.h>
int main(void)
{
	int num;
	int i;
	scanf("%d", &num);
//	printf("%d", num);

	for (i = 0; i <= num; i++) {
		if (num % (i+1) == 0) {
			printf("%d ", i+1);
		}
	}

	return 0;
}