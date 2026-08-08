#include <stdio.h>
void main()
{
    int n, i, s = 0;
    printf("Enter the no. = ");
    scanf("%d", &n);
    printf("Factors = ");
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            s = s + i;
            printf("%d ", i);
        }
    }
    printf("\nSum = %d\n", s);

    (s > n) ? printf("Abundunt no.\n") : printf("Not Abundunt no.\n");
}