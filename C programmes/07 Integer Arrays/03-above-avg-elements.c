#include <stdio.h>
void main()
{
    int i, n, s = 0;
    float avg;
    printf("Enter the range = ");
    scanf("%d", &n);
    int a[n];
    // Array Input
    printf("input in Array = ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    // Array Output + sum
    printf("Array result = ");
    for (i = 0; i < n; i++)
    {
        printf("%d,", a[i]);
        s = s + a[i];
    }
    avg = s / 3.0;
    printf("\nSum = %d", s);
    printf("\nAvg = %f", avg);
    printf("\nAbove Avg =");
    for (i = 0; i < n; i++)
    {
        if (a[i] >= avg)
            printf("\n%d,", a[i]);
    }
}