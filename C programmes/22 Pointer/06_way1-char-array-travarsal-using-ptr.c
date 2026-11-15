// pointer of array
// we'll traverse an array using the address of iach element
#include <stdio.h>
int main()
{
    int i = 0;
    char a[20], *ptr;
    printf("string = ");
    scanf("%[^\n]", a);
    for (ptr = &a[0]; *ptr != '\0'; ptr++, i++)
        printf("a[%d] = %c\t adress = %u\n", i, *ptr, ptr);
    printf("String = %s", a);

    return 0;
}