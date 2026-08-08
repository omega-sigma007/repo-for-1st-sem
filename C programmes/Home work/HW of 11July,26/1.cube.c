// Are & Perimeter(vol) of acube
#include <stdio.h>
void main()
{
    int a, s, v;
    printf("Enter the side length = ");
    scanf("%d", &a);
    s = 6 * a * a;
    v = a * a * a;
    printf("Total surface area = %d", s);
    printf("\nTotal Volume = %d", v);
}