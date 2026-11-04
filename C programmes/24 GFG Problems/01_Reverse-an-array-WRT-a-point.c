#include <stdio.h>
int main(void)
{
    int n, k;
    printf("Enter the range. = ");
    scanf("%d", &n);
    int a[n], r[n], i1, i2, j1, j2;
    printf("Enter the array elements = ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the point = ");
    scanf("%d", &k);
    for (i1 = k - 1, i2 = k, j1 = 0, j2 = n - 1; i1 > j1 || i2 < j2; i1--, j1++, i2++, j2--)
    {
        if (i1 > j1)
            swap(a, i1, j1);
        if (i2 < j2)
            swap(a, i2, j2);
    }
    for (int i = 0; i < n; i++)
        printf("%d  ", a[i]);
}
int swap(int *a, int x, int y)
{
    int temp;
    temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}