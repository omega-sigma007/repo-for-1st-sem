#include <stdio.h>
void main()
{
    int i, n;
    printf("Enter\nn = ");
    scanf("%d", &n);
    if (n >= 1)
    {
        for (i = 1; i <= 20; i++)
        {
            printf("%d * %d = %d\n", n, i, n * i);
        }
    }
    else
        printf("Please enter a +ve integer !!");
}