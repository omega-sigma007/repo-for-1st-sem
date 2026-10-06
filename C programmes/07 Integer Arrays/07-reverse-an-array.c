#include <stdio.h>
void main()
{
    int i, n, k;
    printf("Enter the range = "); //{1,2,3,4,5}
    scanf("%d", &n);
    int a[n], rev[n];
    printf("Enter array elements = ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\n");
    printf("Array result = ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    // Reverse
    for (i = n - 1, k = 0; i >= 0; i--, k++)
        rev[k] = a[i];
    printf("\n");
    printf("Array Reverse result = ");
    for (i = 0; i < n; i++)
        printf("%d ", rev[i]);
}