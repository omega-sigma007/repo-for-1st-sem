#include <stdio.h>
#include <math.h>
void main()
{
    int n, c = 0, x, n1, n2, div = 1, s = 0;
    printf("Enter the no. = ");
    scanf("%d", &n);
    // digit count
    for (x = n; n > 0; n = n / 10)
        c++;
    printf("Digit count = %d\n", c);
    div = round(pow(10, c));
    // Calc of 10^
    // for (int i = 1; i <= c; i++)
    //     div = div * 10;
    n1 = (x * x) / div;
    n2 = (x * x) % div;
    printf("n*n = %d\n", x * x);
    printf("div = %d\n", div);
    printf("n1 = %d\n", n1);
    printf("n2 = %d\n", n2);
    n1 = (x * x) / div;
    n2 = (x * x) % div;
    // n1 loop
    n = s + n1 + n2;
    (x == n) ? printf("Kaprekar no.") : printf("Not Kaprekar no.");
}