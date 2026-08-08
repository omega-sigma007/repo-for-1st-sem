// 1 - x^2/2! + x^4/4! - x^6/6! ...
#include <stdio.h>
#include <math.h>
void main()
{
    int n, fact = 1, power = 2, count = 1;
    int i = 2, sg = -1, de;
    float x, x1, t, nu, s = 1;
    printf("Enter the range. = ");
    scanf("%d", &n);
    printf("Enter x = ");
    scanf("%f", &x);

    printf("1 ");
    for (x1 = x; count < n; i++)
    {
        fact = fact * i;
        if (i % 2 == 0)
        {
            // calc
            nu = sg * round(pow(x1, i));
            de = fact;
            t = (float)nu / (float)de;
            printf("(%.3f/%d)  ", nu, de);
            s = s + t;

            // update
            count++;
            sg = round(pow((-1), count));
        }
    }
    printf("\nSum upto %dth term = %f", n, s);
    printf("\nActual cos(x) = %f      | x = %f", cos(x1), x1);
}