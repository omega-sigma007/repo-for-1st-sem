#include <stdio.h>
void main()
{
    int i, n, v, c = 0;
    printf("n = ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array = ");
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &v);
        if (v % 5 == 0)
        {
            a[c] = v;
            c++;
            a[c] = -1;
            a[c];
            c++;
        }
        else
        {
            a[c] = v;
            a[c];
            c++;
        }
    }
    printf("Array result = ");
    for (i = 0; i < c; i++)
        printf("%d ", a[i]);
}