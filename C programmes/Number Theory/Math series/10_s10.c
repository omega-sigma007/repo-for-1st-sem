// 1- 3x/(9*1!) + 6x^4/(10*3!) - 12x^7/(11*5!)
#include <stdio.h>
#include <math.h>
void main()
{
    int i = 1, l = 3, m = 9, n, x, f = 1, count = 1, power = 1;
    int nu, de, fact = 1, sg = -1, x1;
    float t, s = 1;
    printf("Enter the range. = ");
    scanf("%d", &n);
    printf("Enter x = ");
    scanf("%d", &x);

    printf("1 ");
    for (x1 = x; count <= n - 1; i++)
    {
        fact = fact * i;
        if (i % 2 == 1)
        {
            nu = sg * l * x1;
            de = m * fact;
            t = (float)nu / (float)de;
            printf("(%d*%d)/(%d*%d)  ", sg * l, x1, m, fact);
            s = s + t;
            // updates
            l = l * 2;
            m++;
            power += 2;
            f += 2;
            count++;
            sg = round(pow((-1), count));
            x1 = round(pow(x, power));
        }
    }

    printf("\nSum upto %dth term = %f", n, s);
}
