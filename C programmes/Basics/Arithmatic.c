// WAP to calc addition,multiplication,substaraction,division
#include <stdio.h>
void main()
{
    int a, b, sum, sub, mul, div;
    printf("Enter the number = ");
    scanf("%d", &a);
    printf("Enter the number = ");
    scanf("%d", &b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    printf("Sum of %d and %d = %d", a, b, sum);
    printf("\nProduct = %d", mul);
    printf("\nSubstraction = %d", sub);
    printf("\nDivision = %d", div);
}