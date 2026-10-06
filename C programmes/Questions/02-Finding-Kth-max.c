#include <stdio.h>
int main(void)
{
    int n, k, i, j, max, temp;
    printf("Enter the no. of array elements = ");
    scanf("%d", &n);
    int a[n];
    // input loop
    printf("Enter array elements = ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    while (1)
    {
        printf("k = ");
        scanf("%d", &k);
        for (i = 0; i < k; i++)
        {
            for (j = i, max = i; j < n; j++)
            {
                if (a[j] > a[max])
                    max = j;
            }
            // swap a[i], a[max]
            temp = a[i];
            a[i] = a[max];
            a[max] = temp;
        }
        printf("%d%s Max = %d\n", k, (k == 1) ? "st" : (k == 2) ? "nd"
                                                   : (k == 3)   ? "rd"
                                                                : "th",
               a[k - 1]);
    }
}
