#include <stdio.h>
#include <windows.h>
int main()
{
    char a[20], *ptr;
    printf("String = ");
    scanf("%[^\n]", a);

    ptr = a;
    for (int i = 0; *ptr != '\0'; i++, ptr++)
    {
        if (i == 0)
            printf("a[%d] = %c\t Adress = %u\n", i, *a, a);
        else
            printf("a[%d] = %c\t Adress = %u\n", i, *ptr, ptr);
    }

    // reverse printing
    ptr--;
    printf("Reverse :- \n");
    for (int i = 0; ptr >= a; ptr--, i++)
        printf("a[%d] = %c\t Adress = %u\n", i, *ptr, ptr);

    return 0;
}