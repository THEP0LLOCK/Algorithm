#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char a1[50], a2[50];
	int a3;
	scanf("%s", a1);
	scanf("%s", a2);
	scanf("%d", &a3);

	/*int tmp = a2;
	int len = 0;
	while (tmp != 0) {
		tmp /= 10;
		len++;
	}

	int multiplier = 1;
	for (int i = 0; i < len; i++) {
		multiplier *= 10;
	}

	printf("%d", a1 * multiplier + a2 + a3);*/

	strcat(a1, a2);

	int ans = atoi(a1);

	printf("%d", ans + a3);


	return 0;
}