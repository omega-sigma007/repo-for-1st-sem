// Input → Zebra
// Output → Afcsb
#include <stdio.h>
void main()
{
    char a[100], b[100];
    int i;
    printf("Enter the string = ");
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'z')
            b[i] = 'a';
        else if (a[i] == 'Z')
            b[i] = 'A';
        else if ((a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122))
            b[i] = a[i] + 1;
    }
    b[i] = '\0';
    printf("Your string = %s", b);
}