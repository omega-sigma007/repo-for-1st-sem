#include <stdio.h>
void main()
{
    int n;
    printf("Enter the no.= ");
    scanf("%d", &n);
    if (n == 0)
        printf("%d is a neutral no.", n);
    else if (n % 2 == 0)
        printf("%d is a even no.", n);
    // else if (!(n % 2 == 0))
    else if (n % 2 != 0)
        printf("%d is a odd no.", n);
}