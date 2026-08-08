#include <stdio.h>
void main()
{
    int a = 1, b = 1, c = 1, t, sum = 3, i, n; // 1 1 1 3 5 9
    printf("Enter\nn = ");
    scanf("%d", &n);
    if (n == 1)
        printf("1");
    else if (n == 2)
        printf("1 + 1 = 2");
    else if (n == 3)
        printf("1 + 1 + 1 = 3");
    else if (n > 3)
    {
        printf("1 + 1 + 1");
        for (i = 0; i < n - 3; i++)
        {
            t = a + b + c;
            a = b;
            b = c;
            c = t;
            sum = sum + t;
            printf(" + %d", t);
        }
        printf(" = %d", sum);
    }
    else
        printf("Please try again !!");
}