#include <stdio.h>
void main()
{
    int i, c = 0;
    char x[200], y[200];
    printf("enter the string = ");
    gets(x);
    for (i = 0; x[i] != '\0'; i++)
        printf("%c", x[i]);
    printf("\nReverse = ");
    for (i--; x[i] != '\0'; i--)
        printf("%c", x[i]);
}