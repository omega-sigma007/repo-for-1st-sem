#include <stdio.h>
#include <math.h>
#include <windows.h>
void main()
{
    // ₀ ₁ ₂ ₃ ₄ ₅ ₆ ₇ ₈ ₉
    SetConsoleOutputCP(CP_UTF8);
    int n, i, x, c = 0, binary = 0;
    printf("Enter n = ");
    scanf("%d", &n);
    for (x = n; n >= 1; n /= 2)
        binary = (n % 2) * pow(10, c) + binary;
    printf("Binary of (%d)₁₀ = (%d)₂", x, binary);
}