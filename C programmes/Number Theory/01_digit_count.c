#include <stdio.h>
void main()
{
    int n, x, c = 0;
    printf("Enter the no. = ");
    scanf("%d", &n);
    for (x = n; n > 0; n /= 10)
        c++;
    printf("%d has %d digits", x, c);
}