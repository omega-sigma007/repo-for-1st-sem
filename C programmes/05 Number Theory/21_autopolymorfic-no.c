#include <stdio.h>
#include <math.h>
void main()
{
    int n, x, div, c = 0;
    printf("Enter the number = ");
    scanf("%d", &n);
    for (x = n; n > 0; n = n / 10)
        c++;
    div = round(pow(10, c));
    if ((x * x) % div == x)
        printf("%d = autopolymorfic no.", x);
    else
        printf("%d = not autopolymorfic no.", x);
}