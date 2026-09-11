#include <stdio.h>
void main()
{
    int i, j, f, c = 0;
    char x[200], y[200], concat[400];
    printf("enter the 1st string = ");
    gets(x);
    printf("enter the 2nd string = ");
    gets(y);
    for (i = 0, j = 0;; c++)
    {
        f = 0;
        if (x[i] != '\0')
        {
            f = 1;
            concat[c] = x[i];
            i++;
        }
        else if (f == 0 && y[j] != '\0')
        {
            concat[c] = y[j];
            j++;
        }
        else
            break;
    }
    // Print the result array
    printf("After concatinate = ");
    for (i = 0; i < c; i++)
        printf("%c", concat[i]);
}