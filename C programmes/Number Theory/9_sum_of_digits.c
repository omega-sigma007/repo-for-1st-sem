#include <stdio.h>
void main()
{
    int n, rem, c = 1, s = 0;
    printf("Enter the no. = ");
    scanf("%d", &n);
    for (; n > 0; n = n / 10)
    {
        s = s + n % 10;
    }
    printf("sum = %d", s);
}
