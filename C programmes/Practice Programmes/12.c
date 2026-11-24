#include <stdio.h>
void input(int r, int c, int a[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void out(int r, int c, int a[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
void mul(int m1, int n1, int m2, int n2, int a[m1][n1], int b[m2][n2])
{
    int s = 0;
    for (int k = 0, i; k < m1; k++)
    {
        for (i = 0; i < n2; i++)
        {
            s = 0;
            for (int j = 0; j < m2; j++)
                s += a[k][j] * b[j][i];
            printf("%d ", s);
        }
        printf("\n");
    }
}
int main()
{
    int m1, n1, m2, n2;
    printf("m1 = ");
    scanf("%d", &m1);
    printf("n1 = ");
    scanf("%d", &n1);
    printf("m2 = ");
    scanf("%d", &m2);
    printf("n2 = ");
    scanf("%d", &n2);

    int a[m1][n1], b[m2][n2];
    // input loop
    printf("\nA:-\n");
    input(m1, n1, a);

    printf("\nB:-\n");
    input(m2, n2, b);

    printf("\nA:-\n");
    out(m1, n1, a);

    printf("\nB:-\n");
    out(m2, n2, b);

    // logic
    printf("MUltiplication :-\n");
    mul(m1, n1, m2, n2, a, b);

    return 0;
}