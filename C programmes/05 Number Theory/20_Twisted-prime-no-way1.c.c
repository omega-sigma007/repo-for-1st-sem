#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, x, rev = 0, i = 2, f = 0;
    printf("Enter the no. = ");
    scanf("%d", &n);
    for (x = n; i * i <= x; i++, n = n / 10)
    {
        if (x % i == 0)
        {
            f = 1;
            break;
        }
        rev = rev * 10 + n % 10;
    }
    printf("rev= %d\n", rev);
    printf("i = %d\n", i);
    if (f)
    {
        printf("%d is not a prime no\n", x);
        printf("%d is not a twisted prime no\n", x);
        exit(0);
    }
    else
    {
        printf("%d = prime no.\n");
        for (i = 1; i * i <= rev; i++)
        {
            if (rev % i == 0)
            {
                f = 1;
                break;
            }
        }
        if (f)
        {
            printf("%d is not a prime no\n", rev);
            printf("%d is not a twisted prime no\n", x);
        }
        else
            printf("%d = prime no.\n%d is a twisted prime no\n", rev, x);
    }
}