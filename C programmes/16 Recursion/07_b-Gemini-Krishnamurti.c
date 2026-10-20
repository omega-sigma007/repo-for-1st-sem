#include <stdio.h>

// Single recursive function handling both digit extraction and factorial countdown
int soFact(int n, int d, int f, int sum)
{
    if (d == -1)
    {
        // Base case: if number is fully processed and no active digit remains
        if (n == 0)
            return sum;

        int next_digit = n % 10;
        if (next_digit == 0)
        {
            // 0! is 1, so add 1 immediately and move to the next digit
            return soFact(n / 10, -1, 1, sum + 1);
        }
        else
        {
            // Start calculating factorial for the new digit (counting down from next_digit)
            return soFact(n / 10, next_digit, 1, sum);
        }
    }
    else if (d > 1)
    {
        // Recursively calculate the factorial by multiplying and decrementing d
        return soFact(n, d - 1, f * d, sum);
    }
    else
    {
        // Factorial calculation for the current digit is finished (d == 1)
        int completed_fact = f * (d > 0 ? d : 1);

        if (n == 0)
            return sum + completed_fact;

        int next_digit = n % 10;
        if (next_digit == 0)
        {
            return soFact(n / 10, -1, 1, sum + completed_fact + 1);
        }
        else
        {
            return soFact(n / 10, next_digit, 1, sum + completed_fact);
        }
    }
}

int main(void)
{
    int n;
    printf("n = ");
    scanf("%d", &n);

    // Initial call: pass n, d = -1 (to trigger first digit fetch), f = 1, sum = 0
    printf("Sum of factorials = %d\n", soFact(n, -1, 1, 0));
    return 0;
}