#include <stdio.h>
void main()
{
    char a[100], ser[50];
    int i, j, f = 0;
    printf("Enter the string = ");
    gets(a);
    printf("Enter the substring to be searched for = ");
    gets(ser);
    for (i = 0, j = 0; a[i] != '\0'; i++)
    {
        f = 0;
        if (ser[j] == '\0')
        {
            f = 1;
            break;
        }
        if (a[i] == ser[j])
        {
            j++;
            f = 1;
        }
        else if (a[i] != ser[j])
            j = 0;
    }
    if (f == 0)
        printf("substring not found!!");
    else
        printf("substring found!!");
}