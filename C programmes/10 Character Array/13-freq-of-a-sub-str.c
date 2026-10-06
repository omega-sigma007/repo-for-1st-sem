#include <stdio.h>
void main()
{
    char a[100], ser[50];
    int i, j, f = 0, count = 0;
    printf("Enter the string = ");
    gets(a);
    printf("Enter the substring to be searched for = ");
    gets(ser);
    for (i = 0, j = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ser[j])
            j++;
        else if (a[i] != ser[j])
            j = 0;
        if (ser[j] == '\0')
            count++;
    }
    if (count != 0)
    {
        printf("substring found!!");
        printf("\n%s is present within \n%s :-\n%d Times", ser, a, count);
    }
    else
        printf("substring not found!!");
}