#include <stdio.h>
int main(void)
{
	int a1, a2;
	int t;
	int max = 0;
	scanf("%d %d", &a1, &a2);

	// GCD(A, B) == GCD(B, A % B)
	// 115 276
	// 276 115
	// 115 46
	// 46 23
	// 23 0

	while (a2 != 0) {
		t = a1 % a2;
		a1 = a2;
		a2 = t;
	}
	printf("%d", a1);


	return 0;
}