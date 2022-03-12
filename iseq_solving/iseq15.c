#include <stdio.h>

int main(void)
{
	int r1 = 0;
	double heavy = 0;
	int hc = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &r1);
		if (r1 >= 60) {
			heavy = heavy + r1;
			hc++;
		}
	}
	printf("%d\n%.2lf\n", hc,heavy/hc);
	return 0;
}
