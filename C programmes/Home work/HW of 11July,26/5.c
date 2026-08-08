// month to day
#include <stdio.h>
void main()
{
    int mon, day;
    printf("Enter the month = ");
    scanf("%d", &mon);
    day = mon * 30;
    printf("%d month = %d day", mon, mon * 30);
}
