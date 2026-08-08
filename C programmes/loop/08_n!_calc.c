// 1^2+2^2+3^2+4^2+…+n^2 = sum
#include <stdio.h>
void main()
{
    int i, n, p;
    printf("Enter\nn = ");
    scanf("%d", &n);
    p = n;
    printf("WE know\n");
    printf("n! = n*(n-1)*...*1 \n");
    if (n == 0)
    {

        printf("1! = 1*(0!)\n");
        printf("0! = 1");
    }
    else if (n >= 1)
    {

        printf("%d", n);
        for (i = n - 1; i >= 1; i--)
        {
            printf(" * %d", i);
            p = p * i;
        }
        printf(" = %d\n%d! = %d", p, n, p);
    }
    else
        printf("Enter a Whole number !!");
}