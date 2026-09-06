#include <stdio.h>
void main()
{
    int i, n, max = 0, j = 0;
    float avg;
    printf("Enter the range = ");
    scanf("%d", &n);
    int a[n];
    printf("Input array = ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Array result = ");
    for (i = 0; i < n; i++)
    {
        printf("%d,", a[i]);
        if (a[i] > max)
        {
            max = a[i];
            j = i;
        }
    }
    printf("\nMax element = %d\tindex = %d\tposition = %d", max, j, j + 1);
}