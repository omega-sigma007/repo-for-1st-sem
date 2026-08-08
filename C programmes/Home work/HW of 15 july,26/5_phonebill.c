#include <stdio.h>
void main()
{
    int min, rs;
    printf("Enter the call min = ");
    scanf("%d", &min);
    if (min > 1 && min <= 100)
    {
        rs = min * 1;
        printf("Total bill ammount = %d", rs);
    }
    else if (min <= 200)
    {
        rs = (min - 100) * 4 + 100;
        printf("Total bill ammount = %d", rs);
    }
    else if (min <= 400)
    {
        rs = (min - 200) * 4 + 500;
        printf("Total bill ammount = %d", rs);
    }
    else if (min <= 800)
    {
        rs = (min - 400) * 10 + 2100;
        printf("Total bill ammount = %d", rs);
    }
    else if (min > 800)
    {
        rs = (min - 800) * 12 + 6100;
        printf("Total bill ammount = %d", rs);
    }
}