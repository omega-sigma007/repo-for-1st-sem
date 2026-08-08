#include <stdio.h>
void main()
{
    int i, n, a = 1, b = 1, c, sum = 2; // 1 1 2 3 5 8
    printf("Enter\nn = ");
    scanf("%d", &n);
    if (n == 1)
        printf("1");
    else if (n == 2)
        printf("1 + 1 = 2");
    else if (n > 2)
    {
        printf("1 + 1");
        for (i = 0; i < n - 2; i++)
        {
            c = a + b;
            a = b;
            b = c;
            sum = sum + c;
            printf(" + %d", c);
        }
        printf(" = %d", sum);
    }
    else
        printf("Please Try again !!");
}