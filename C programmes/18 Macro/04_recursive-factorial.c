// #include <stdio.h>
// #define fact(x) ((!x) ? 1 : x * fact(x - 1))
// int main()
// {
//     int x;
//     printf("x = ");
//     scanf("%d", &x);
//     printf("%d! = %d", x, fact(x));
//     return 0;
// }
#include <stdio.h>
#define FACT(n) ((n) == 0 ? 1 : (n) * FACT((n) - 1))
int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %d", FACT(n));

    return 0;
}