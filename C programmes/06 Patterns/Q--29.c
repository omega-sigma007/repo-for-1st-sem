/*

1
1 2 3
1 2 3 4 5
1 2 3 4 5 6 7

*/
#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Enter the rnge = ");
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
        for (j = 1; j <= 2 * i - 1; j++)
            printf("%d ", j);
        printf("\n");
    }
}