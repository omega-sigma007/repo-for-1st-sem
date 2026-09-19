// Input → aily kumary sett
// Output → Aily Kumary Sett

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
            a[i] -= 32;
    }
    printf("%s", a);
}