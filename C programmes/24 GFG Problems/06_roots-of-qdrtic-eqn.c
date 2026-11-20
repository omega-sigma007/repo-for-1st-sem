#include <stdio.h>
#include <math.h>
int main()
{
    // ₀ ₁ ₂ ₃ ₄ ₅ ₆ ₇ ₈ ₉
    int a, b, c;
    printf("Solution of a qdr eqn :-\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    printf("the eqn is :-\n");
    char sgb, sgc;
    sgb = (b < 0) ? '-' : '+';
    sgc = (c < 0) ? '-' : '+';
    printf("%dx^2 %c %dx %c %d = 0\n", a, sgb, abs(b), sgc, abs(c));
    int D;
    D = b * b - 4 * a * c;
    if (D < 0)
        printf("No Real roots.");
    else if (D == 0)
    {
        float x = (-b) / (2.0 * a);
        printf("The roots are same.\n");
        printf("x = %.3f\tx = %.3f", x, x);
    }
    else
    {
        float x1, x2;
        x1 = (-b + sqrt(b * b - 4 * a * c)) / (2.0 * a);
        x2 = (-b - sqrt(b * b - 4 * a * c)) / (2.0 * a);
        printf("2 distint real roots exist.\n");
        printf("x = %.3f\tx = %.3f", x1, x2);
    }

    return 0;
}