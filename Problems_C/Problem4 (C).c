#include <stdio.h>

int main(void)
{
    int n, x;
    scanf("%d %d", &n, &x);
    printf("%d", x >> n);

    return 0;
}