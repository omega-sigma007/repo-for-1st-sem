#include <stdio.h>
void main()
{
    int n, i, t;
    float midv;
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

    // Alternate Elements
    printf("\nEnter the index from which traversing starts = ");
    scanf("%d", &t);
    printf("Alternate elements from index %d , value %d  = ", t, a[t]);
    for (i = t; i < n; i += 2)
        printf("%d ", a[i]);
}