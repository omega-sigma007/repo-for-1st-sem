#include <stdio.h>
#include <string.h>
void main()
{
    // strlwr(x) = x <- (lowercase of x)
    char x[20];
    printf("Enter the 1st string = ");
    gets(x);
    scanf("%s", x);
    printf("Before string = %s", x);
    strlwr(x);
    printf("\nAfter string = %s", x);
}