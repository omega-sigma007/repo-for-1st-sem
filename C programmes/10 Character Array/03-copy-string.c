#include <stdio.h>
void main()
{
    int i, c = 0;
    char x[200], y[200];
    printf("enter the string = ");
    gets(x);
    printf("Before copy = ");
    for (i = 0; x[i] != '\0'; y[i] = x[i], i++)
        printf("%c", x[i]);
    printf("\nAfter copy = ");
    for (i = 0; y[i] != '\0'; i++)
        printf("%c", y[i]);
}