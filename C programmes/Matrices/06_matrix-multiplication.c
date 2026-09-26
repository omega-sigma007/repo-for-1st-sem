#include <stdio.h>
int main()
{
    int i, j, k, m1, n1, m2, n2, p, sum;
    int f1 = 0, f2 = 0, width = 0, temp, max = 0;
    printf("Enter row & column of Matrix A = ");
    scanf("%d%d", &m1, &n1);
    printf("Enter row & column of Matrix B = ");
    scanf("%d%d", &m2, &n2);
    int a[m1][n1], b[m2][n2], ab[m1][n2];
    // Input in A
    printf("Input in A :-\n");
    for (i = 0; i < m1; i++)
        for (j = 0; j < n1; j++)
        {
            printf("Enter pos %d,%d = ", i, j);
            scanf("%d", &a[i][j]);
        }

    // Input in B
    printf("Input in B :-\n");
    for (i = 0; i < m2; i++)
        for (j = 0; j < n2; j++)
        {
            printf("Enter pos %d,%d =", i, j);
            scanf("%d", &b[i][j]);
        }

    // Calculating the max width among all entries
    for (j = 0; j < n1; j++)
    {
        for (i = 0; i < m1; i++)
        {
            for (temp = a[i][j], width = 0; temp > 0; temp /= 10)
                width++;
            if (a[i][j] < 0)
                width++;
            if (max < width)
                max = width;
        }
    }

    // Matrix Print A & B
    for (i = 0, k = 1; i < ((m1 > m2) ? m1 : m2); k++)
    {
        if (i == m1 / 2 && f1 == 0)
        {
            printf("A = ");
            f1 = 1;
        }
        else if (k % 2 == 1)
            printf("    ");
        // controlling the row overflow
        int f = 0;
        if (i >= m1 && k % 2 == 1)
        {
            for (int sp = 0; sp < max * n1 + 2 * (n1 + 1) + 9; sp++)
                printf(" ");
            f = 1;
        }
        if (!f)
        {
            printf("[");
            // Accessing each element within matrix a & b and printing
            for (j = 0; j < ((k % 2 != 0) ? n1 : n2); j++)
            {
                // Controlling digit spacing problem for matrix a
                if (k % 2 != 0)
                {
                    for (temp = a[i][j], width = 0; temp > 0; temp /= 10)
                        width++;
                    for (int x = 1; x <= max - width; x++)
                        printf(" ");
                }
                // Printing each element
                printf(" %d ", ((k % 2 != 0) ? a[i][j] : b[i][j]));
            }
            printf("]     \t");
        }
        if (i == m2 / 2 && f2 == 0)
        {
            printf("B = ");
            f2 = 1;
        }
        else
            printf("    ");
        if (k % 2 == 0)
        {
            printf("\n");
            i++;
        }
    }
    printf("\n");
    // Multiplication Logic
    for (k = 0; k < m1; k++)
        for (j = 0; j < n2; j++)
        {
            for (i = 0, sum = 0; i < n1; i++)
            {
                p = a[k][i] * b[i][j];
                sum += p;
            }
            ab[k][j] = sum;
        }
    printf("Multiplication result :-\n");
    for (i = 0; i < m1; i++)
    {
        if (i == m1 / 2)
            printf("AB = ");
        else
            printf("     ");
        printf("[");
        for (j = 0; j < n2; j++)
            printf(" %d ", ab[i][j]);
        printf("]\n");
    }
    return 0;
}