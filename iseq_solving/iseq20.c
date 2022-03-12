#include <stdio.h>
int main(void)
{
	char str[50];
	int l = 0;
	scanf("%s", str);

	while (str[l] != 0) l++;
	for (int i = 0; i < l; i++) {
		if (str[i] == 65) {
			str[i] = '*';
		}
	}
	printf("%s", str);
	//65 42

	return 0;
}