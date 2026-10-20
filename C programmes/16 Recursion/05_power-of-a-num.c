#include <stdio.h>
int power(int, int);
int main(void)
{
    int base, pow;
    printf("base,pow = ");
    scanf("%d%d", &base, &pow);
    if (base == 0 && pow == 0)
        printf("pow(%d,%d) = Undefined", base, pow);
    else
        printf("pow(%d,%d) = %d", base, pow, power(base, pow));
}

int power(int base, int index)
{
    if (index == 0)
        return 1;
    else
        return base * power(base, index - 1);
}
