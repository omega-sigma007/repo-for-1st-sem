#include <stdio.h>

int main()
{
    char a[100], ser[50];
    int i, j, f = 0;

    printf("Enter the string = ");
    gets(a);

    printf("Enter the substring to be searched for = ");
    gets(ser);

    for (i = 0; a[i] != '\0'; i++)
    {
        for (j = 0; ser[j] != '\0'; j++)
        {
            if (a[i + j] != ser[j])
                break;
        }

        if (ser[j] == '\0')
        {
            f = 1;
            break;
        }
    }

    if (f == 0)
        printf("Substring not found!!");
    else
        printf("Substring found!!");

    return 0;
}