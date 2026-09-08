#include <stdio.h>
void main()
{
    int i, j, n, temp, c = 1;
    printf("Enter the range = ");
    scanf("%d", &n);
    int a[n];
    // Input
    printf("Enter array elements = ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    // Output
    printf("Array result = ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    // Sorting

    for (i = 0; i <= n - 2; i++, c++)
    {
        for (j = 0; j <= n - 2; j++, c++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        printf("\n\nIte %d = ", i + 1);
        for (j = 0; j < n; j++)
            printf("%d ", a[j]);
        printf("\nTotal ite = %d\n", c);
    }
}