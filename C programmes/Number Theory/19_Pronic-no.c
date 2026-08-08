#include <stdio.h>
void main()
{
    int n, i, s = 0, f = 0;
    printf("Enter the no. = ");
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++)
    {
        if (n == i * (i + 1))
        {
            printf("%d = Pronic no.", n);
            f = 1;
            break;
        }
    }
    if (f == 0)
        printf("%d = Not pronic no.", n);
}