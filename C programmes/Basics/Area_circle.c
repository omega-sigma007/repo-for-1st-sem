#include <stdio.h>
void main()
{
    float pi, r, area, s;
    pi = 3.14;
    printf("Enter the radious = ");
    scanf("%f", &r);
    area = pi * r * r;
    s = 2 * pi * r;
    printf("Area = %.3f", area);
    printf("\nPerimeter = %.3f", s);
}