#include <stdio.h>
#define max 1
int main(void)
{
    printf("Date = %s\n", __DATE__);
    printf("Time = %s\n", __TIME__);
    printf("Line = %d\n", __LINE__);
    printf("File = %s\n", __FILE__);
    printf("Version = %s\n", __STDC_VERSION__);
}