#include <stdio.h>
void main()
{
    int n, i = 2, f = 0;
    printf("Enter the no. = ");
    scanf("%d", &n);
    for (; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            f = 1;
            break;
        }
    }
    (f == 1) ? printf("Not Prime") : printf("Prime no");
}