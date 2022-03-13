#include <stdio.h>
int main(void)
{
	int num;
	int all = 0;
	scanf("%d", &num);
	if (num % 2 == 1) {
		for (int i = 1; i <= num; i+=2) {
			all = all + i;
		}
	}
	else if (num % 2 == 0) {
		for (int i = 2; i <= num; i+=2) {
			
			all = all + i;	
		}
	}
	printf("%d", all);

	return 0;
}