#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, x, rev = 0, i = 2, f = 0;
    printf("Enter the no. = ");
    scanf("%d", &n);
    for (x = n; i < x || n > 0; i++, n = n / 10)
    {
        if (x % i == 0)
            break;
        rev = rev * 10 + n % 10;
    }
    printf("rev= %d\n", rev);
    printf("i = %d\n", i);
    if (i < x / 2)
    {
        printf("%d is not a prime no\n", x);
        printf("%d is not a twisted prime no\n", x);
        exit(0);
    }
    else
    {
        printf("%d = prime no.\n");
        for (i = 1; i < rev; i++)
        {
            if (rev % i == 0)
                break;
        }
        if (i < rev / 2)
        {
            printf("%d is not a prime no\n", rev);
            printf("%d is not a twisted prime no\n", x);
        }
        else
            printf("%d = prime no.\n%d is a twisted prime no\n", rev, x);
    }
}