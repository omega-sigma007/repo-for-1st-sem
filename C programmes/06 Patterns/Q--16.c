/*
5
4 4
3 3 3
2 2 2 2
1 1 1 1 1
*/
#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Enter the range = ");
    scanf("%d", &n);
    /*
    Assuming :-
    4
    4 3
    4 3 2
    4 3 2 1
    */
    for (i = n; i >= 1; i--)
    {
        for (j = n; j >= i; j--)
            printf("%d ", i);
        printf("\n");
    }
    /*
     Assuming :-
     4
     3 4
     2 3 4
     1 2 3 4
     */

    for (i = n; i >= 1; i--)
    {
        for (j = i; j <= n; j++)
            printf("%d ", i);
        printf("\n");
    }
}