#include <stdio.h>
int main(void)
{
	char str[100];
	int sum = 0;

	for (int i = 0; i < 5; i++) {	
	scanf("%s", str);
	sum = sum + sizeof(str);
	}

	printf("%d", sum);

	return 0;
}