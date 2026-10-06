#include <stdio.h>
#include <math.h>
void main()
{
    int n, c = 0, x, t = 0, s = 0;
    printf("Enter the no. = ");
    scanf("%d", &n);
    // digit count
    for (x = n; n > 0; n = n / 10)
        c++;
    printf("digit = %d\n", c);
    // power of each term
    for (n = x; n > 0; n = n / 10, c--)
    {
        t = round(pow((n % 10), c));
        printf("%d ", t);
        s = s + t;
    }
    printf("\nt = %d\n", s);
    if (x == s)
        printf("%d is a Disarium no.\n\n", x);
    else
        printf("%d is not a Disarium no.\n\n", x);
}