#include <stdio.h>
void main()
{
    int i, j, f = 0, sum = 0, n;
    printf("Enter the range = ");
    scanf("%d", &n);
    printf("---\t\t----");
    printf("\nOdd\t\tEven\n");
    printf("---\t\t----");
    for (i = 1; i <= n; i++)
    {
        printf("\n %d \t\t  ", i);
        i++;
        printf("%d", i);
    }
}