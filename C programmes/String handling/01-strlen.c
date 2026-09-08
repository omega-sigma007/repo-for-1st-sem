#include <stdio.h>
#include <string.h>
void main()
{
    // calc length of a string
    char str[20];
    printf("Enter the string = ");
    gets(str);
    printf("%s", str);
    printf("\nString length = %d", strlen(str));
}