// wap to convert decimal to binary
#include <stdio.h>
#include <string.h>
void main()
{
    int rem = 0, s = 0, i = 1, x, n;
    printf("Enter the No.= ");
    scanf("%d", &x);
    for (n = x; x > 0; x = x / 2)
    {
        rem = x % 2;
        s = s + (rem * i);
        i = i * 10;
    }
    printf("Decimal No. = %d Equivalent Binary No. = %d", n, s);
}