/*

****
 ***
  **
   *

   */
#include <stdio.h>
void main()
{
    int i, j, n, sp;
    printf("Enter the rnge = ");
    scanf("%d", &n);
    /*
    Assuming :-
    1234
     123
      12
       1
    */
    for (i = n; i >= 1; i--)
    {
        for (sp = n - 1; sp >= i; sp--)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}