/*
/wap to convert binary decimal
*/
#include <stdio.h>
#include <string.h>
void st();
void main()
{

    int n, x, rem, s = 0, i, j, p;
    printf("Enter the No. = ");
    scanf("%d", &n);
    for (x = n, j = 1; n > 0; n = n / 10, j = j * 2)
    {
        rem = n % 10;
        p = rem * j;
        s = s + p;
    }
    printf("Binary No. = %d Equivalent Decimal No. = %d", x, s);
}