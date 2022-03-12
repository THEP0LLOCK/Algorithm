#include <stdio.h>
int main(void) {
	int array[10];
	int max = 0;
	int min = 100;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &array[i]);
	}

	for (int i = 0; i < 10; i++) {
		if (max < array[i]) {
			max = array[i];
		}
		if (min > array[i]) {
			min = array[i];
		}

	}

	printf("%d\n%d", max, min);

	return 0;
}