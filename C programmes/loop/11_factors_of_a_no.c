#include <stdio.h>
void main()
{
    int i, n;
    printf("Enter the range = ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("Factors of %d :-\n1", n);
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
                printf(" , %d", i);
        }
        printf(" , %d", n);
    }
    else if (n == 0)
        printf("Please enter a non zero +ve integer.");
}