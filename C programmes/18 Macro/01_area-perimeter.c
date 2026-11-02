// area & perimeter of a circle
#include <stdio.h>
#define pi 3.14
int main()
{
    int r;
    printf("Enter the radious = ");
    scanf("%d", &r);
    printf("Perimeter = %.3f", 2 * pi * r);
    printf("\nArea = %.3f", pi * r * r);
}