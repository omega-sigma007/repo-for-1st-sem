#include <stdio.h>
void main()
{
    int yr;
    printf("Enter the year = ");
    scanf("%d", &yr);
    if ((yr % 4 == 0 && yr % 100 != 0) || yr % 400 == 0)
        printf("Leap yr.");
    else
        printf("not leapyear.");
}