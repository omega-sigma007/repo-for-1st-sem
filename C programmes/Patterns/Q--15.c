/*
4 4 4 4
3 3 3
2 2
1
*/
#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Enter the range = ");
    scanf("%d", &n);
    /*
    Assuming :-
    1 2 3 4
    1 2 3
    1 2
    1
    */
    for (i = n; i >= 1; i--) // 1st assumption
    {
        for (j = 1; j <= i; j++)
            printf("%d ", i);
        printf("\n");
    }
    /*
    Assuming :-
    4 3 2 1
    3 2 1
    2 1
    1
    */
    for (i = n; i >= 1; i--) // 2nd assumption
    {
        for (j = i; j >= 1; j--)
            printf("%d ", i);
        printf("\n");
    }
}
