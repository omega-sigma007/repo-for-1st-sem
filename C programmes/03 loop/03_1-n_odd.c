#include <stdio.h>
void main()
{
    int n, s = 1;
    printf("Enter\nn = ");
    scanf("%d", &n);
    if (n >= 1)
    {
        printf("1");
        for (int i = 3; i <= n; i += 2)
        {
            printf(" + %d", i);
            s = s + i;
        }
        printf(" = %d", s);
    }
    else
        printf("Please enter a +ve integer");
}