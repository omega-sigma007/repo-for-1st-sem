#include <limits.h> // Required for INT_MAX/MIN

int reverse(int x)
{
    int rev = 0;
    while (x != 0)
    {
        int digit = x % 10; // Extract last digit
        x /= 10;            // Remove last digit

        // Overflow Check (Before multiplication!)
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7))
            return 0;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))
            return 0;

        rev = rev * 10 + digit; // Append digit
    }
    return rev;
}