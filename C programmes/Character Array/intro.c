#include <stdio.h>
void main()
{
    int i;
    char a[20];
    printf("Enter the string = ");
    gets(a);
    printf("%s\n", a);
    for (i = 0; a[i] != '\0'; i++)
        printf("%c", a[i]);
    printf("\na[4] = %s", a[4]);
    printf("\n");
    for (i = 0; a[i] != 0; i++)
        printf("%c", a[i]);
}