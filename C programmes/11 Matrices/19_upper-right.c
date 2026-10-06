#include <stdio.h>
int main()
{
    int i, j, sp, n, max = 0, len = 0, temp;
    printf("Enter the order of the matrix = ");
    scanf("%d", &n);
    int a[n][n];
    // input loop
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            printf("Enter the value for position %d,%d = ", i, j);
            scanf("%d", &a[i][j]);
        }
    // Performing formatted printing
    // print the matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (len = 0, temp = a[i][j]; temp != 0; temp /= 10)
                len++;
            if (a[i][j] <= 0)
                len++;
            if (len > max)
                max = len;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("[ ");
        for (j = 0; j < n; j++)
        {
            for (len = 0, temp = a[i][j]; temp != 0; temp /= 10)
                len++;
            if (a[i][j] <= 0)
                len++;

            // for right alignment of each value
            for (sp = 1; sp <= max - len; sp++)
                printf(" ");
            printf("%d ", a[i][j]);
        }
        printf(" ]");
        printf("\n");
    }
    printf("Upper right triangle :-\n");
    // upper right triangle print
    for (i = 0; i < n; i++)
    {
        for (sp = 1; sp <= i; sp++)
            printf("    ");
        for (j = i; j < n; j++)
        {
            if (i > 0)
                for (temp = a[i - 1][j - 1], len = 0; temp != 0; temp /= 10)
                    len++;
            if (a[i - 1][j] < 0)
                len++;
            for (sp = 0; sp < len; sp++)
                printf(" ");

            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
