#include <stdio.h>

void main()
{
    int a;
    char t;
    // typeof('a' / 2) b = 10;
    // printf("\n", b);
    // scanf("%d", &a);
    // if (a > 'a' / 2)
    // {
    //     printf("Hello");
    // }
    // else if (a < 'Z')
    //     printf("Achha");

    // printf("%d", 'A' + 2);
    // t = printf("\n%c", 65);
    // printf("\n%c", t + 1);
    // scanf("%c", &t);
    // if (t >= 65)
    //     printf("%c", t);
    int n;
    scanf("%d", &n);
    if (n > 0)
        printf("+ve");
    if (n == 0)
        printf("nutral");
    if (n < 0)
        printf("-ve");
}