// pointer of array
// we'll traverse an array using the address of iach element & calc the sum
#include <stdio.h>
int main()
{
    int n, s = 0;
    printf("Range = ");
    scanf("%d", &n);
    int a[n], *ptr;
    printf("Input array elements = ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    ptr = &a[0];
    for (int i = 0; i < n; i++, ptr++)
    {
        printf("Value of a[%d] = %d\t adress = %u\n", i, *ptr, ptr);
        s += *ptr;
    }
    printf("sum = %d", s);
}