#include <stdio.h>
int main(void)
{
	double min = 100;
	double array[10];
	for (int i = 0; i < 10; i++) {
		scanf("%lf", &array[i]);
	}
	for (int i = 0; i < 10; i++) { //�� �� �ݺ���
		if (array[i] > 0 && min > 0 && min > array[i]) min = array[i]; //�� ��
		else if (array[i] > 0 && min < 0 && min + array[i] < 0) min = array[i]; //�� ��
		else if (array[i] < 0 && min > 0 && min + array[i] > 0) min = array[i]; //�� ��
		else if (array[i] < 0 && min < 0 && min < array[i]) min = array[i]; //�� ��
	}


	printf("%.1lf", min);

	return 0;
}