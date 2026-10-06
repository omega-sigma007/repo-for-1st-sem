// Withhout ignoring case
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
        if (x[i] != y[i])
        {
            f = 0;
            break;
        }
    if (f == 0)
        printf("Not matched");
    else
        printf("matched");
}