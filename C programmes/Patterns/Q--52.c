/*
A
B B
C C C
D D D D
*/
#include <stdio.h>
int main()
{
    int i, j, n;
    char ch;
    printf("Enter the number = ");
    scanf("%d", &n);
    for (i = 1, ch = 'A'; i <= n; i++, ch++)
    {
        for (j = 1; j <= i; j++)
            printf("%c ", ch);

        printf("\n");
    }
    return 0;
}