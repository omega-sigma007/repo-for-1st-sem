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
    for (i = 1; i <= n - 1; i++, c++)
    {
        for (j = i; j >= 1; j--, c++)
        {
            if (a[j - 1] > a[j])
            {
                temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
        printf("\n\nIte %d = ", i);
        for (j = 0; j <= n - 1; j++)
            printf("%d ", a[j]);
        printf("\nTotal ite = %d\n", c);
    }
}