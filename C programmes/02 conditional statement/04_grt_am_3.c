#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter the 3 no. = ");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && a == c)
        printf("All are equal");
    else if (a == b && c > b)
        printf("%d is greatest", c);
    else if (a == b && b > c)
        printf("%d,%d are greatest ", a, b);
    else if (b == c && a > c)
        printf("%d is greatest", a);
    else if (b == c && a < c)
        printf("%d,%d are greatest ", b, c);
    else if (c == a && b > a)
        printf("%d is greatest", b);
    else if (c == a && b < a)
        printf("%d,%d are greatest ", a, c);
    else if (a > b && a > c)
        printf("%d is greatest", a);
    else if (b > c)
        printf("%d is greatest", b);
    else
        printf("%d is greatest", c);
}