#include <stdio.h>
#include <string.h>
void main()
{
    // strupr(x) = x <- (uppercase of x)
    char x[20];
    printf("Enter the 1st string = ");
    gets(x);
    printf("Before string = %s", x);
    strupr(x);
    printf("\nAfter string = %s", x);
}