// Krishnamurthy no  145-> 1!+4!+5!
#include <stdio.h>
void main()
{
    int n, x, rem, f = 1, s = 0, j;
    printf("Enter the No. = ");
    scanf("%d", &n);
    for (x = n; n > 0; n = n / 10)
    {
        rem = n % 10;
        for (j = 1; j <= rem; j++)
        {
            f = f * j;
        }
        s = s + f;
        f = 1;
    }
    if (x == s)
        printf("%d is Krishnamurthy No. ", x);
    else
        printf("%d is NOT Krishnamurthy No. ", x);
}