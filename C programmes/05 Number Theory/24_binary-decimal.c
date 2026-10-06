#include <stdio.h>
#include <math.h>
#include <windows.h>
void main()
{
    // ₀ ₁ ₂ ₃ ₄ ₅ ₆ ₇ ₈ ₉
    SetConsoleOutputCP(CP_UTF8);

    int n, i, x, c = 0, decimal = 0;
    printf("Enter n = ");
    scanf("%d", &n);
    for (x = n; n > 0; n /= 10, c++)
        decimal += n % 10 * pow(2, c);
    printf("(%d)₂ = (%d)₁₀", x, decimal);
}