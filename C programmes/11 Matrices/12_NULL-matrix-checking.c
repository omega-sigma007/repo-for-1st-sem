#include <stdio.h>
#include <stdlib.h>
void main()
{
    int r, c, i, j, f = 0;
    printf("Enter the row & column = ");
    scanf("%d%d", &r, &c);
    if (r == c)
    {
        int A[r][c];
        // Input A
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("Enter for position %d,%d = ", i, j);
                scanf("%d", &A[i][j]);
            }
        }

        // Print A
        for (i = 0; i < r; i++)
        {
            if (i == r / 2)
                printf("A = ");
            else
                printf("    ");
            printf("[");
            for (j = 0; j < c; j++)
            {
                if (A[i][j] / 10 == 0 && A[i][j] >= 0)
                    printf(" ");
                printf(" %d ", A[i][j]);

                // Process
                if (A[i][j] != 0)
                    f = 1;
            }
            printf("]");
            printf("\n");
        }
        printf("Matrix A is%s a null matrix", (f) ? " not" : "");
    }
    else
    {
        printf("For null matrix row and column must be equal.");
        exit(0);
    }
}