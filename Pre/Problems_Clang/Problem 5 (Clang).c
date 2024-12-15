#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	scanf("%s", &str);

	int cntPlus = 0, cntMinus = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == '-') cntMinus++;
		else cntPlus++;
	}

	printf("%d%", 100 - cntMinus + cntPlus);
}