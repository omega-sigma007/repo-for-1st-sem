#include <stdio.h>
void main()
{
    float len, br;
    printf("Enter Len & Breth = ");
    scanf("%f %f", &len, &br);
    printf("Area = %.3f", len * br);
    printf("\nPerimeter = %.3f", 2 * (len + br));
}