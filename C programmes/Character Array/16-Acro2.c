// Input → Aily Sett
// Output → A.SETT

#include <stdio.h>
void main()
{
    int i, sp;
    char a[100];
    printf("Enter the string = ");
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 97 && a[i] <= 122)
            a[i] -= 32;
        if (i == 0)
            printf("%c", a[0]);
        if (i > 0 && a[i - 1] == ' ' && a[i] != ' ')
        {
            printf(".%c", a[i]);
            sp = i + 1;
        }
    }
    for (i = sp; a[i] != '\0'; i++)
        printf("%c", a[i]);
}