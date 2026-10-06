#include <stdio.h>
void main()
{
    int i;
    char x[100];
    printf("Enter the string = ");
    gets(x);
    for (i = 0; x[i] != '\0'; i += 2)
        printf("%c", x[i]);
}