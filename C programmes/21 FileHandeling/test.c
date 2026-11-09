#include <stdio.h>
int main()
{
    // char a[20], b[20], r[50];
    // printf("Enter the 1st string = ");
    // gets(a);
    // printf("Enter the 2nd string = ");
    // gets(b);
    // snprintf(r, 40, "%s %s", a, b);
    // puts(r);

    char d[5], ch;
    printf("String = ");
    while (1)
    {
        ch = fgetc(stdin);
        if (ch == '$')
            break;
        snprintf(d, 1, "%c", ch);
    }
    printf("%s", d);
}