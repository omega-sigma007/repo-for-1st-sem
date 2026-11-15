#include <stdio.h>
int main(void)
{
    int a = 5, b = 10, *pt;
    pt = &a;
    pt = &b;
    printf("Adress of a = %p  ,pt = %p\n", &a, pt);
    printf("Adress of a = %zu  ,pt = %u\n", &a, pt);
    printf("Adress of b = %p  ,pt = %p\n", &b, pt);
    printf("Adress of b = %u  ,pt = %u\n", &b, pt);
}