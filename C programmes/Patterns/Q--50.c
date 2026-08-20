/*
A B C D
E F G H
I J K L
M N O P
*/
#include <stdio.h>
int main()
{
    int i, j, n;
    char ch = 'A';
    printf("Enter the number = ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++, ch++)
            printf("%c ", ch);

        printf("\n");
    }
    return 0;
}