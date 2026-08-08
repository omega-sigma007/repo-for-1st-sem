// WAP to calc Surface area and volume of a cuboid
#include <stdio.h>
void main()
{
    int a, b, c, s, v;
    printf("Enter the Length,bredth,height = ");
    scanf("%d%d%d", &a, &b, &c);
    s = 2 * (a * b + b * c + c * a);
    v = a * b * c;
    printf("Total surface area = %d", s);
    printf("\nTotal volume = %d", v);
}