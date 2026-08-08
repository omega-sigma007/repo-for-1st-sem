#include <stdio.h>
void main()
{
    int x;
    printf("Enter the year = ");
    scanf("%d", &x);
    if (x % 4 == 0 || x % 400 == 0)
        printf("The year %d is a leap year", x);
    else
        printf("The year %d isnot a leap year", x);
}