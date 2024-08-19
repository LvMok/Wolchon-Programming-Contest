#include <stdio.h>

int main(void)
{
	int M, A, B;

	scanf("%d%d %d", &M, &A, &B);

	if (B + M > 60) {
		A += (B + M) / 60;
		B = B + M - (B + M) / 60 * 60;
	}
	else {
		B += M;
	}

	if (B - 1 < 0) {
		A--;
		B += 60;
	}
	else B--;

	if (A > 23) {
		A -= A - A / 24 * 24;
	}

	printf("%0d½Ã %0dºÐ", A, B);

    return 0;
}