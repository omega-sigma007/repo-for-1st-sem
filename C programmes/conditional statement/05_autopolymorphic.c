#include <stdio.h>
void main()
{
    int n, sq;
    printf("Enter the no. = ");
    scanf("%d", &n);
    sq = n * n;
    if (sq % 10 == n || sq % 100 == n)
        printf("Autopolymorphic");
    else
        printf("Not Autopolymorphic");
}