/*
1
0 0
1 1 1
0 0 0 0
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
    1 2
    1 2 3
    1 2 3 4
    */
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d ", i % 2);
        printf("\n");
    }
}