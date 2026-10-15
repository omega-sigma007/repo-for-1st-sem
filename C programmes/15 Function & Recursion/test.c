#include <stdio.h>
int change(int);
void main()
{
    int a = 10;
    change(a);
    printf("Change = %d", a);
}
int change(int x)
{
    x = 8;
    return;
}