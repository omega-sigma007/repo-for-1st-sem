#include <stdio.h>
void main()
{
    float n;
    printf("Enter the no. = ");
    scanf("%f", &n);
    if (n > 0)
        printf("%f is a +ve no.", n);
    else if (n == 0)
        printf("%f is a neutral no.", n);
    else
        printf("%f is a -ve no.", n);
}