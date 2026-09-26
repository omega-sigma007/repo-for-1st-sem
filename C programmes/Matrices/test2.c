#include <stdio.h>
int main()
{
    int i, j, n;
    printf("n = ");
    scanf("%d", &n);
    for (i = 0; i < ((n % 2 == 0) ? 4 : 3); i++)
        printf("* ");
}