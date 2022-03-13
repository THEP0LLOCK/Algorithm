#include <stdio.h>
int main(void)
{
	double min = 100;
	double array[10];
	for (int i = 0; i < 10; i++) {
		scanf("%lf", &array[i]);
	}
	for (int i = 0; i < 10; i++) { //값 비교 반복문
		if (array[i] > 0 && min > 0 && min > array[i]) min = array[i]; //양 양
		else if (array[i] > 0 && min < 0 && min + array[i] < 0) min = array[i]; //양 음
		else if (array[i] < 0 && min > 0 && min + array[i] > 0) min = array[i]; //음 양
		else if (array[i] < 0 && min < 0 && min < array[i]) min = array[i]; //음 음
	}


	printf("%.1lf", min);

	return 0;
}