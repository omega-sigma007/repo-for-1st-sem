#include <stdio.h>
void str(char *);
int main()
{
    char a[20];
    printf("String = ");
    scanf("%[^\n]", a);
    str(a);
    return 0;
}
void str(char *a) // ***imp point.
{
    char *b = a;
    printf("1)From fn, String = ");
    for (; *a != '\0'; a++)
        printf("%c", *a);

    printf("\n2)From fn, String = ");
    a = b;
    for (int i = 0; a[i] != '\0'; i++)
        printf("%c", a[i]);
}