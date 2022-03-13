#include <stdio.h>
int main(void)
{
	int year;
	scanf("%d", &year);
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
		printf("À±³â");
	}
	else printf("Æò³â");

	return 0;
}