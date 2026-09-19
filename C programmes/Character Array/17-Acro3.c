// Input → Aily Kumary Sett
// Output → Sett Aily Kumary

#include <stdio.h>
void main()
{
    int i, sp;
    char a[100];
    printf("Enter the string = ");
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (i == 0 && a[i] >= 97 && a[i] <= 122)
            a[i] -= 32;
        if (i > 0 && a[i] >= 97 && a[i] <= 122 && a[i - 1] == ' ' && a[i] != ' ')
        {
            a[i] -= 32;
            sp = i;
        }
    }

    for (i = sp; a[i] != '\0'; i++)
        printf("%c", a[i]);
    printf(" ");
    for (i = 0; i < sp; i++)
        printf("%c", a[i]);
}