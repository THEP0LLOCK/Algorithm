#include <stdio.h>
int main(void)
{
	char str[100];
	int sum = 0;
	int l = 0;

	for (int i = 0; i < 5; i++) {	
		l = 0;
		scanf("%s", str);
		while (str[l] != 0) l++;
		sum = sum + l;
		//디버그용 printf("%d", sum);
	}

	printf("%d", sum);

	return 0;
}