#include <stdio.h>
void main()
{
    int i, j, f = 1, c = 0;
    char x[200];
    printf("enter the string = ");
    gets(x);
    for (i = 0; x[i] != '\0'; i++, c++)
        printf("%c", x[i]);
    c--;
    for (i = 0, j = c; i <= c / 2; i++, j--)
    {
        if (x[i] != x[j])
        {
            f = 0;
            break;
        }
    }
    if (f == 0)
        printf("\nNOT Pallindrome");
    else
        printf("\nPallindrome");
}