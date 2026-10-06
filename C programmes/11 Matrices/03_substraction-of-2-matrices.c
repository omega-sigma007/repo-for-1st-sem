#include <stdio.h>
void main()
{
    int r, c, i, j;
    printf("Enter the row & column = ");
    scanf("%d%d", &r, &c);
    int A[r][c], B[r][c], S[r][c];
    // Input A,B
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter for Matrix A for position %d,%d = ", i, j);
            scanf("%d", &A[i][j]);
            printf("Enter for Matrix B for position %d,%d = ", i, j);
            scanf("%d", &B[i][j]);
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
        }
        printf("]");
        printf("\n");
    }
    printf("\n");
    // Print Matrix B
    for (i = 0; i < r; i++)
    {
        if (i == r / 2)
            printf("B = ");
        else
            printf("    ");
        printf("[");
        for (j = 0; j < c; j++)
        {
            if (B[i][j] / 10 == 0 && B[i][j] >= 0)
                printf(" ");
            printf(" %d ", B[i][j]);
        }
        printf("]");
        printf("\n");
    }
    printf("\n");
    // Calc the sum & Print the Addition
    for (i = 0; i < r; i++)
    {
        if (i == r / 2)
            printf("S = ");
        else
            printf("    ");
        printf("[");
        for (j = 0; j < c; j++)
        {
            S[i][j] = A[i][j] - B[i][j];
            if (S[i][j] / 10 == 0 && S[i][j] >= 0)
                printf(" ");
            printf(" %d ", S[i][j]);
        }
        printf("]");
        printf("\n");
    }
}
