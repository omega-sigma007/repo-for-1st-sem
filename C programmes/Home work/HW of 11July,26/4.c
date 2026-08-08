// Sec to day
#include <stdio.h>
void main()
{
    int sec, min, hr, day, n;
    printf("Enter the second = ");
    scanf("%d", &sec);
    n = sec;
    min = sec / 60;
    sec = sec % 60;

    hr = min / 60;
    min = min % 60;

    day = hr / 24;
    hr = hr % 24;

    printf("%d sec = %d day %d hr %d min %d sec", n, day, hr, min, sec);
}