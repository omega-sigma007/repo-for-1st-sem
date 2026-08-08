#include <stdio.h>
void main()
{
    int n, x, rem, s = 0;
    printf("Enter the no. = ");
    scanf("%d", &n);
    for (x = n; n > 0; n = n / 10)
    {
        rem = n % 10;
        s = s + rem;
    }
    printf("Sum of digits of %d = %d", x, s);
}
