/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include <stdio.h>
void main()
{
    int i, j, n, sp;
    printf("Enter the range = ");
    scanf("%d", &n);
    /*
    Assuming :-
    1
    2 1
    3 2 1
    4 3 2 1
    */
    for (i = 1; i <= n; i++)
    {
        for (j = i; j >= 1; j--)
            printf("%d ", j % 2);
        printf("\n");
    }
}