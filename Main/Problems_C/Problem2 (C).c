#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[51];  
    int a;               

    fgets(str, sizeof(str), stdin);

    scanf("%d", &a);

    str[a - 1] = 'T';

    printf("%s", str);

    return 0;
}