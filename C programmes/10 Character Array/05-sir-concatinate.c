#include <stdio.h>
void main()
{
    int i, j;
    char x[200], y[200], concat[400]; // sir
    printf("enter the 1st string = ");
    gets(x);
    printf("enter the 2nd string = ");
    gets(y);
    // Copy x
    for (i = 0, j = 0; x[i] != '\0'; i++, j++)
        concat[i] = x[j];
    concat[i] = ' ';
    // Copy y
    for (i += 1, j = 0; y[j] != '\0'; i++, j++)
        concat[i] = y[j];

    // Print the result array
    printf("After concatinate = ");
    for (j = 0; j <= i; j++)
        printf("%c", concat[j]);
}