/*
A B C D
A B C
A B
A
*/
#include <stdio.h>
void main()
{
    int i, j, n;
    char x, y;
    printf("Enter the range = ");
    scanf("%d", &n);
    for (i = n, x = 'A'; i >= 1; i--, x++)
    {
        for (j = 1, y = x; j <= i; j++, y++)
            printf("%c ", y);
        printf("\n");
    }
}