#include <stdio.h>
int soF(int, int, int);
int main(void)
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("soF = %d", soF(n ? n : 1, 0, 1));
}
int soF(int n, int d, int f)
{
    if (n != 0)
    {
        if (f >= 1 && d != 0)
            return f * soF(n, d, f - 1);
        else if (f == 0)
            return 1;
        if (d == 0)
            d = n % 10;
        int fact = soF(n, d, d);
        return fact + soF(n / 10, 0, 1);
    }
    else if (n == 0)
        return 0;
}
