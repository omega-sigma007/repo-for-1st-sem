// Input → Aily Sett
// Output → A.S
#include <stdio.h>
void main()
{
    int i;
    char a[100];
    printf("Enter the string = ");
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 97 && a[i] <= 122)
            a[i] -= 32;
        if (i == 0)
            printf("%c", a[0]);
        // Safely check for i>0;or it would be checking for index -1 when i=0 .
        if (i > 0 && a[i - 1] == ' ' && a[i] != ' ')
            printf(".%c", a[i]);
    }
}