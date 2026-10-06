#include <stdio.h>
void main()
{
    int i, j, n, min, ser, f = 0;
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

    // Search
    printf("\nEnter the element you want to search = ");
    scanf("%d", &ser);
    for (i = 0; i < n; i++)
        if (ser == a[i])
        {
            printf("\n%d found\nIndex = %d\tPosition = %d", ser, i, i + 1);
            f = 1;
        }
    if (f == 0)
        printf("\n%d Not found!!", ser);
}
