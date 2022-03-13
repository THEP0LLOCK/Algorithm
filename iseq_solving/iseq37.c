#include <stdio.h>
int main(void)
{
	int array[10];
	int min = 100;
	int max = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &array[i]);
	}
	for (int i = 0; i < 9; i++) {
		if (array[i] > max) {
			max = array[i];
		}
		else if (array[i] < min) {
			min = array[i];
		}
	}

	printf("%d", max - min);

	return 0;
}