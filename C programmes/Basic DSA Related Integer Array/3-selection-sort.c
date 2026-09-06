#include <stdio.h>
void main()
{
    int i, j, n, min, c = 1, temp;
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
    for (i = 0; i <= n - 2; i++, c++)
    {
        for (j = i + 1, min = i; j < n; j++, c++)
            if (a[min] > a[j])
                min = j;
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;

        printf("\n\nIteration %d = ", i + 1);
        for (j = 0; j < n; j++)
            printf("%d ", a[j]);

        printf("\nTotal iteration = %d", c);
    }
}