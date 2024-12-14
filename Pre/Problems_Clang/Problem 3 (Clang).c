#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char file1[21],file2[21];

	scanf("%s %s", &file1, &file2);;

	printf("C:\\%s\\%s", file1, file2);
}