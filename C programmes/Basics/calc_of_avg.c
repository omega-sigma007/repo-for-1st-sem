#include <stdio.h>
void main()
{
    int a, b, c;
    float avg;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    avg = (a + b + c) / 3;
    printf("Avg of %d,%d,%d is = %f", a, b, c, avg);
    printf("\nAvg of %d,%d,%d is = %.3f", a, b, c, avg);
}