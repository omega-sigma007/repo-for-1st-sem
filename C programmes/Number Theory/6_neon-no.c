#include <stdio.h>
void main()
{
    int n, sq, rem, s = 0;
    printf("Enter the no. = ");
    scanf("%d", &n);
    for (sq = n * n; sq > 0; sq = sq / 10)
    {
        rem = sq % 10;
        s = s + rem;
    }
    if (n == s)
        printf("%d = a neon no.", n);
    else
        printf("%d is not a neon no.", n);
}