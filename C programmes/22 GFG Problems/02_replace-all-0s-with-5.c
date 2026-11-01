#include <stdio.h>
int main(void)
{
    int n, x, num = 0, ten = 1;
    printf("n = ");
    scanf("%d", &n);
    for (x = n; n != 0; n /= 10, ten *= 10)
        num += ((n % 10) ? (n % 10) : 5) * ten;
    printf("%d -> %d", x, num);
}