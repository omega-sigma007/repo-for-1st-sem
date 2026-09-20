#include <stdio.h>
void main()
{
    int n, i, f = 0;
    printf("Enter the no. = ");
    scanf("%d", &n);
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            f = 1;
            break;
        }
    }
    printf("%d is %s a prime no!!", n, (f) ? "not" : "");
}