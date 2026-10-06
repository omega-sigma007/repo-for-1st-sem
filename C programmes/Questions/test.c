#include <stdio.h>
int main(void)
{
    char a[10] = "abir";
    if (a[9] == '\0')
        putchar('O');
    else
        printf("%c", a[9]);
}