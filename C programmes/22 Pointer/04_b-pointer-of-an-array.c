// Just to illustrate the use of pointer we do -
// remove a character within a string & the index is given by user..
#include <stdio.h>
#include <string.h>
char *string(char *, int);
int main()
{

    int r;
    char a[20];
    printf("String = ");
    scanf("%s", a);
    printf("Enter the index to be removed = ");
    scanf("%d", &r);

    printf("Formatted string = %s", string(a, r));
    return 0;
}

char *string(char *ch, int r)
{
    for (; r + 1 < strlen(ch); r++)
        ch[r] = ch[r + 1];
    ch[r] = '\0';
    return ch;
}