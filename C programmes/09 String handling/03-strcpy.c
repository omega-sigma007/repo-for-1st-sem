#include <stdio.h>
#include <string.h>
void main()
{
    // strcpy(destination,source)
    char str[20], copy[20];
    printf("Enter the string = ");
    gets(str);
    printf("Main string = %s", str);
    strcpy(copy, str);
    printf("\nCopy string = %s", copy);
}