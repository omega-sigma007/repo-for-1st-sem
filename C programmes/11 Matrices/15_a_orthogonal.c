#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k, sum, f = 0;
    printf("Enter the dimention = ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("Wrong dimention!!");
        exit(0);
    }
    int A[n][n], AT[n][n], M[n][n];
    // Input in A
    printf("Input in A :-\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            printf("Enter pos %d,%d = ", i, j);
            scanf("%d", &A[i][j]);
        }

    // Print A
    for (i = 0; i < n; i++)
    {
        if (i == n / 2)
            printf("A = [");
        else
            printf("    [");
        for (j = 0; j < n; j++)
        {
            printf(" %d ", A[i][j]);
            AT[j][i] = A[i][j];
        }
        printf("]\n");
    }

    // Calculation A * Transpose(A)
    // Checking orthogonality by mathematical definition
    for (k = 0; k < n; k++)
    {
        for (j = 0; j < n; j++)
        {
            for (i = 0, sum = 0; i < n; i++)
                sum += A[k][i] * AT[i][j];

            M[k][j] = sum;
            if ((k == j && M[k][j] != 1) || (k != j && M[k][j] != 0))
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
            break;
    }
    printf("A is%s an Orthogonal matrix", (f) ? " not" : "");
}