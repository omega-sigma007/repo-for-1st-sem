#include <stdio.h>
void main()
{
    int i, j, n, temp, c = 1;
    printf("Enter the range = "); // 4 3 2 1
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
    for (i = 1; i < n; i++, c++)
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
        printf("\n\nIteration %d = ", i);
        for (int k = 0; k < n; k++)
            printf("%d ", a[k]);

        printf("\nTotal iteration = %d", c);
    }
}