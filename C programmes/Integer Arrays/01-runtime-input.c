#include <stdio.h>
void main()
{
    int i, n, arr1[5], ar[2];
    printf("n = ");
    scanf("%d", &n);
    int arr2[n];
    printf("1st array length = 5");
    printf("\n2nd array length = %d", n);
    printf("\ninput in array 1 = ");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr1[i]);

    printf("\ninput in array 2 = ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr2[i]);
    printf("Array1 result = [");

    for (i = 0; i < 5; i++)
        printf("%d,", arr1[i]);
    printf("]");
    printf("\nArray2 result = [");
    for (i = 0; i < n; i++)
        printf("%d,", arr2[i]);
    printf("]");
}