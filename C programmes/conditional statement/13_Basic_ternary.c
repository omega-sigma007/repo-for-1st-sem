#include <stdio.h>
void main()
{
    int n;
    printf("Enter the no = ");
    scanf("%d", &n);
    (n > 0)   ? printf("%d is a +ve no.", n)
    : (n > 0) ? printf("%d is a -ve no.", n)
              : printf("%d is a neutral no.", n);
}