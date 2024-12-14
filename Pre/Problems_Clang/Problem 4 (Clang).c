#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	printf("%.1f", (c - b) / a);
}