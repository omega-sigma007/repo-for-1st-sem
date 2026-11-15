// Just to illustrate the use of pointer we do -
//  Sort of all elements within the array (For int array)
// remove a character within a string & the index is given by user..
#include <stdio.h>
int *sort(int *, int);
int main()
{
    int n, *pta;
    printf("Enter the range for integer array = ");
    scanf("%d", &n);

    int a[n];
    pta = &a[0];

    printf("Enter the values :-\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
        printf("a[%d] = %d\n", i, a[i]);

    sort(a, n);

    printf("After sorting :-\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
int *sort(int *a, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    }
    return 0;
}
