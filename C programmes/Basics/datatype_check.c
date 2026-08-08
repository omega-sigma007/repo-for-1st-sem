#include <stdio.h>
void main()
{
    int n;
    float len;
    double e;
    char c;
    char name[10] = "Abir";
    n = 10;
    len = 105.56;
    e = 2.7182818285;
    c = 'A';
    printf("%d", n);
    printf("\n%f", len);
    printf("\ne = %.16lf", e);
    printf("\ne = %.16g", e);
    printf("\n%c", c);
    printf("\n%s", name);
}