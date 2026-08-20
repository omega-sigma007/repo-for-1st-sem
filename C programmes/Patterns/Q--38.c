/*
1
2 6
3 7 10
4 8 11 13
5 9 12 14 15
*/
#include <stdio.h>
void main()
{
    int i, j, n, a, d;
    printf("Enter the ramge = ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        // for (a = i, d = 4, j = 1; j <= i; a += d, d--, j++) --> me
        for (a = i, j = 1; j <= i; a += 5 - j, j++) //-- sir + me
            printf("%d ", a);
        printf("\n");
    }
}
