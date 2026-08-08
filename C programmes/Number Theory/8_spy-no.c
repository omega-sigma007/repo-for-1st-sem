#include <stdio.h>
void main()
{
    int n, sq, x, rem, p = 1, s = 0;
    printf("\nEnter the no. = ");
    scanf("%d", &n);
    for (x = n; n > 0; n = n / 10)
    {
        rem = n % 10;
        s = s + rem;
        p = p * rem;
    }
    if (s == p)
        printf("%d is a spy no.\n\n", x);
    else
        printf("%d is not a spy no.\n\n", x);
}