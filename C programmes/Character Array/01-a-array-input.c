// Take input and find the length
#include <stdio.h>
void main()
{
    int i = 0;
    char x[200];
    printf("enter the string = ");
    gets(x);
    while (x[i] != '\0') // including space
        i++;
    printf("String lenght = %d", i);
}