// Factorial calc. using recursive function of 3rd type i.e. (no prameter + reteurn)
#include <stdio.h>
int n;
int fact();
int main()
{
    printf("n = ");
    scanf("%d", &n);
    int x = n;
    printf("%d! = %d", x, fact());
    return;
}
int fact()
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n-- * fact();
}