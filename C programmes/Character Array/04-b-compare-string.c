// ignoring case
#include <stdio.h>
void main()
{
    int i, f = 1;
    char x[200], y[200];
    printf("enter the 1st string = ");
    gets(x);
    printf("enter the 2nd string = ");
    gets(y);
    for (i = 0; x[i] != '\0' || y[i] != '\0'; i++)
    {
        if (x[i] >= 65 && x[i] <= 90)
            x[i] = x[i] + 32;
        if (y[i] >= 65 && y[i] <= 90)
            y[i] = y[i] + 32;
        if (x[i] != y[i])
        {
            f = 0;
            break;
        }
    }
    if (f == 0)
        printf("Not matched");
    else
        printf("Matched");
}