#include <stdio.h>
int main(void)
{
    char n[100];
    int num = 0, f = 0;
    printf("Enter the no. = ");
    scanf("%s", n);
    if (n[f] == '0')
        f = 1;
    for (int i = 0; n[i] != '\0'; i++)
        printf("%c", n[i]);
    printf(" is %sa  Duck No", (f) ? "" : "not ");
}