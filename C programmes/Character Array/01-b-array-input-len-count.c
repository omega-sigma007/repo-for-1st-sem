// Take input and find the length
#include <stdio.h>
void main()
{
    int i, c = 0;
    char x[200];
    printf("enter the string = ");
    gets(x);
    for (i = 0; x[i] != 0; i++) // excluding space
        if (x[i] != ' ')
            c++;
    printf("String lenght = %d", c);
}