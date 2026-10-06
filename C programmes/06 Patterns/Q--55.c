/*
D C B A
C B A
B A
A

*/
#include <stdio.h>
int main()
{
    int n, i, j;
    char x = 'A', y;
    printf("Enter the range = ");
    scanf("%d", &n);
    for (x += n - 1; x >= 'A'; x--)
    {
        for (y = x; y >= 'A'; y--)
            printf("%c ", y);
        printf("\n");
    }
    return 0;
}