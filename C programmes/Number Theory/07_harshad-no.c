#include <stdio.h>
void main()
{
    int n, x, sq, rem, s = 0;
    printf("Enter the no. = ");
    scanf("%d", &n);
    for (x = n; n > 0; n = n / 10)
    {
        rem = n % 10;
        s = s + rem;
    }
    if (x % s == 0)
        printf("%d is a harshad no.", x);
    else
        printf("%d is not a harshad no.", x);
}