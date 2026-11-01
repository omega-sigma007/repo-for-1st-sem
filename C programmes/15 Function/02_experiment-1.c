#include <stdio.h>
int main(int c, char *a[])
{
    for (int i = 0; i < c; i++)
        printf("%s \n", a[i]);
    printf("\n");
    return 0;
}
