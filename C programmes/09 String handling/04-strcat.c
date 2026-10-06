#include <stdio.h>
#include <string.h>
void main()
{
    // strcat(x,y)
    // x <- x+y  and y remains intact
    char x[20], y[20];
    printf("Enter the 1st string = ");
    gets(x);
    printf("Enter the 2nd string = ");
    gets(y);
    printf("Before concat 1st string = %s", x);
    printf("\nBefore concat 2nd string = %s", y);
    strcat(x, y);
    printf("\nAfter concat 1st string = %s", x);
    printf("\nAfter concat 2nd string = %s", y);
    strcat(y, x);
    printf("\nAfter concat 1st string = %s", x);
    printf("\nAfter concat 2nd string = %s", y);
}