// pointer of array
// we'll traverse an array using the address of iach element
#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    char a[20], *ptr = &a[0];
    printf("string = ");
    scanf("%[^\n]", a);

    for (; ptr <= &a[strlen(a) - 1]; ptr++, i++) //***Adress checking
        printf("a[%d] = %c\t adress = %u\n", i, *ptr, ptr);

    printf("String = %s", a);

    return 0;
}