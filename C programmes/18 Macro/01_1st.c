#include <stdio.h>
#define max 1
int main(void)
{
    int a[max];
    for (int i = 0; i < 8; i++)
    {
        printf("Enter the value for index %d = ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 8; i++)
        printf("%d ", a[i]);
}