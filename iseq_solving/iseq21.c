#include <stdio.h>
int main(void) {
	int num;
	int i;
	scanf("%d", &num);
	int array[10][10];

	for (i = 0; i < num * num; i++) {
		array[i/num][i%num] = i+1;
	}
	//Ãâ·Â
	for (int x = 0; x < num; x++) {
		for (int y = 0; y < num; y++) {
			printf("%3d", array[x][y]);
		}
		printf("\n");
	}

	return 0;
}