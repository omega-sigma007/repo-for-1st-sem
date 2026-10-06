#include <stdio.h>
void main()
{
    int r, c, i, j;
    printf("Enter the row & column = ");
    scanf("%d%d", &r, &c);
    int A[r][c], AT[c][r];
    // Input A,B
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
            AT[j][i] = A[i][j];
            if (A[i][j] / 10 == 0 && A[i][j] >= 0)
                printf(" ");
            printf(" %d ", A[i][j]);
        }
        printf("]");
        printf("\n");
    }
    printf("\n");
    // Print Transpose of A
    for (i = 0; i < c; i++)
    {
        if (i == r / 2)
            printf("Transpose of A = ");
        else
            printf("                 ");
        printf("[");

        // Processing
        for (j = 0; j < r; j++)
        {
            if (A[i][j] / 10 == 0 && A[i][j] >= 0)
                printf(" ");
            printf(" %d ", AT[i][j]);
        }

        printf("]");
        printf("\n");
    }
}