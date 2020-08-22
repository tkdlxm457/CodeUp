#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d", &b);
reget:
	scanf("%d", &a);
	printf("%d\n", a);
	if (b != 0) {
		b--;
		goto reget;
	}
	return 0;
}