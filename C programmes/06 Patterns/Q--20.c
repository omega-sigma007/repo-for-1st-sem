/*

   *
  **
 ***
****

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
      12
     123
    1234
    */
    for (i = 1; i <= n; i++)
    {
        for (j = n - 1; j >= i; j--)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}