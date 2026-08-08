#include <stdio.h> // sum of factors = no. eg. = 6,28
void main()
{
    int i, n, s = 0;
    printf("Enter the no = ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            s = s + i;
        }
    }
    (n == s) ? printf("Perfect no.") : printf("Not perfect no.");
}