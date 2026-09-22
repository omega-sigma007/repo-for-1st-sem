#include <stdio.h>
void main()
{
    int n, j, fact = 1, x, sum = 0;
    printf("Enter n = ");
    scanf("%d", &n);
    for (x = n; n > 0; n /= 10)
    {
        for (j = 1, fact = 1; j < n % 10; j++)
            fact *= j;
        sum += fact;
    }
    printf("%d is%s a Krishnamurti no !!", x, (sum == x) ? "" : " not");
}