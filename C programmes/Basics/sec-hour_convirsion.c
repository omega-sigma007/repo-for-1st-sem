// Sec to hr + min to hr
#include <stdio.h>
void main()
{
    int sec, min, hr, n;
    printf("Enter the second = ");
    scanf("%d", &sec);
    n = sec;
    min = sec / 60;
    sec = sec % 60;

    hr = min / 60;
    min = min % 60;
    printf("%d sec = %d hr %d min %d sec", n, hr, min, sec);
}