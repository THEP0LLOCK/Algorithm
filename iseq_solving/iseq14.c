#include <stdio.h>

int main(void)
{
	int money[6] = {0, 5000,6000,7000,10000,20000 };
	int r1,r2,r3 =0 ;
	while (1) {
		scanf("%d%d%d", &r1,&r2,&r3);
		if ((r1 == 0) && (r2 == 0) && (r3 == 0)) break;
		printf("%d\n", money[r1] + money[r2] + money[r3]);
	}

	return 0;
}
