#include <stdio.h>
int main(void)
{
	int x, y, z, num;
	scanf("%d", &num);
	x = num - (num / 10)*10;
	y = (num / 10)-((num / 100)*10); //=48
	z = (num / 100); //=4

	printf("%d", x + y + z);
	

	return 0;
}