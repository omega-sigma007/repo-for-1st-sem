// sum of squars of special numbers
// Q 2778
#include <stdio.h>
int specialNo(int *, int);
int main(void)
{
    int a[50], n;
    while (1)
    {
        printf("n = ");
        scanf("%d", &n);
        if (n <= 50)
            break;
    }
    printf("Enter array elements :-\n ");
    for (int i = 0; i < n;)
    {
        printf("Input for index %d = ", i);
        scanf("%d", &a[i]);
        if (a[i] <= 50)
            i++;
    }
    printf("Sum = %d", specialNo(a, n));
}
int specialNo(int *a, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (n % (i + 1) == 0)
            s += a[i] * a[i];
    }
    return s;
}