#include <stdio.h>
void main()
{
    int n, a[10] = {1};
    for (int i = 0; i <= 9; i++)
        scanf("%d ", a);
    for (int i = 0; i <= 9; i++)
        printf("%d ", a[i]);
}