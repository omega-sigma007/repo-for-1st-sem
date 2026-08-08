#include <stdio.h>
void main()
{
    int n, x, c = 1, rem, s = 0;
    printf("Enter the no. = ");
    scanf("%d", &n);
    for (x = n; n > 0; n = n / 10)
        s = s + n % 10;
    n = s;
    s = 0;
    for (x = n; n > 0; n = n / 10)
        s = s + n % 10;
    if (s == 1)
        printf("%d is a majic no.", x);
    else
        printf("%d is not a majic no.", x);
}