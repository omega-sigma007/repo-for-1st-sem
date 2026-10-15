// Max b/w 2 numbers using pointer
#include <stdio.h>
void max(int *a, int *b);
int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    max(&a, &b);
}
void max(int *a, int *b)
{
    if (*a > *b)
        printf("Max = %d", *a);
    else
        printf("Max = %d", *b);
}