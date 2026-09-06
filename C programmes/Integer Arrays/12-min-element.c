#include <stdio.h>
void main()
{
    int n, i, j, min;
    printf("Enter the range = ");
    scanf("%d", &n);
    int a[n];
    // Input
    printf("Enter array elements = ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    // Output
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    // Min find.
    min = a[0];
    j = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            j = i;
        }
    }
    printf("\nMin element = %d\tindex = %d\tposition = %d", min, j, j + 1);
}