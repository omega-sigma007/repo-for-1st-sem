#include <stdio.h>
void main()
{
    float a, b;
    printf("Enter the 2 no.= ");
    scanf("%f%f", &a, &b);
    if (a > b)
        printf("%.3f is grtr than %.3f", a, b);
    else if (a == b)
        printf("%.3f and %.3f are eqal", a, b);
    else
        printf("%.3f is grtr than %.3f", b, a);
}