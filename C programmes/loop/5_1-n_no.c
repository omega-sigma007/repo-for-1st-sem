#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("Enter the range = ");
    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
            sum = sum + i;
        }
        printf("\nSum upto %d = %d", n, sum);
    }
    else
        printf("Please enter a +ve integer!!");
}