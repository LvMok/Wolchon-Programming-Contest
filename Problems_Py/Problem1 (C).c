#include <stdio.h>

int main(void)
{
	int a, b;
	long long int c = 1;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < b; i++) {
		c *= a;
	}
	printf("%lld", c);

	return 0;
}