/*

----1
---21
--321
-4321
54321
*/
#include <stdio.h>
void main()
{
    int i, j, n, sp;
    printf("Enter the range = ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (sp = n - 1; sp >= i; sp--)
            printf("  ");
        for (j = i; j >= 1; j--)
            printf("%d ", j);
        printf("\n");
    }
}