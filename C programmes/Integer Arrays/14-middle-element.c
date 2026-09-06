#include <stdio.h>
void main()
{
    int n, i, j, midi;
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

    // Find Middle
    if (n % 2 == 1)
    {
        midi = n / 2;
        printf("\nMiddle element = %d", a[midi]);
    }
    else
    {
        midv = (a[n / 2] + a[n / 2 - 1]) / 2.0;
        printf("\n2 mids are = %d , %d", a[n / 2 - 1], a[n / 2]);
        printf("\nAvg of 2 middle = %f", midv);
    }
}