//  Input → Aily Sett
// Output → SETT KUMARI AILY
#include <stdio.h>
void main()
{
    int i, j, sp, t = 0;
    char a[100];
    printf("Enter the string = ");
    gets(a);
    for (i = 0; a[i] != '\0'; i++, t++)
    {
        if (i == 0 && a[i] >= 97 && a[i] <= 122)
            a[i] -= 32;
        if (i > 0 && a[i] >= 97 && a[i] <= 122 && a[i - 1] == ' ' && a[i] != ' ')
            a[i] -= 32;
    }
    printf("%s\nStr length = %d\n", a, t);
    printf("Your string = ");
    for (i = t - 1; i >= 0; i--)
    {
        if (a[i - 1] == ' ' || i == 0)
        {
            for (j = i;; j++)
            {
                if (a[j] == '\0' || a[j] == ' ')
                    break;
                printf("%c", a[j]);
            }
            printf(" ");
        }
    }
}