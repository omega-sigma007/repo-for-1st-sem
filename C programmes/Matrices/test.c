#include <stdio.h>
int main()
{
    // Understanding multilevel nesting loops.
    int i, j, k, l, m, n;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            for (k = 1; k <= 5; k++)
            {
                for (l = 1; l <= 5; l++)
                    printf("* ");
                printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}