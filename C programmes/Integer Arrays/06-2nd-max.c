#include <stdio.h>
void main()
{
    int i, n, max, max2, k, j = 0;
    printf("Enter the range = "); //{1,2,3,4,5}
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements = ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Array result = ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    // Find max
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            j = i;
        }
    }

    printf("\n\nThe max element is = %d at %d index", max, j);

    // Find 2nd max
    if (j == 0)
    {
        max2 = a[1];
        k = 1;
    }
    else
    {
        max2 = a[0];
        k = 0;
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > max2 && i != j)
        {
            max2 = a[i];
            k = i;
        }
    }
    printf("\n\nThe 2nd max element is = %d at index = %d", max2, k);
}