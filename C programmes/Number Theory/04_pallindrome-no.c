#include <stdio.h>
void main()
{
    int n, rev = 0, x, c = 0;
    printf("Enter the no. = ");
    scanf("%d", &n);
    for (x = n; n > 0; n = n / 10)
        rev = rev * 10 + (n % 10);

    printf("Reverse of %d = %d\n", x, rev);
    (x == rev) ? printf("Pallindrome no.") : printf("Not Pallindrome no.");
}