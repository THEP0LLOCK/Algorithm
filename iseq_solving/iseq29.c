#include <stdio.h>
int main(void)
{
	int a1 = 0, a2 = 0, a3 = 0;
	int test = 107;
	int x;

	int array[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &array[i]);
	}

	for (int i = 0; i < 10; i++) {
		if ((array[i] - 100) <= 0) {
			if (array[i] / 10 == 0 ) {
				a1 = a1 + array[i];
			}
			else a2 = a2 + array[i];
		}
		else a3 = a3 + array[i];
	}
	

	/*
	for (x = 0; x < 10; x++) {
		if (array[x] - 100 > 0) {
			a1 = a1 + array[x];
		}
		else if (array[x] / 100 == 0) {
			a2 = a2 + array[x];
		}
		else
			a3 = a3 + array[x];

	
	
	}
	*/


	printf("%d %d %d", a1, a2, a3);

	return 0;
}