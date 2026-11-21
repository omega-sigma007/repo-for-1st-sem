#include <stdio.h>
#define max(a, b) (a > b) ? a : b
int main()
{
    // Brute Force approach -> gett all sub array and calc the max sum among them
    // In this approach Time complexity = O(n^2)
    int a[] = {3, -4, 5, 4, -1, 7, -8}, n = 7;
    int st, i, maxS = a[0], curS = 0;
    for (st = 0; st < 7; st++)
    {
        curS = 0;
        for (i = st; i < n; i++)
        {
            curS += a[i];
            maxS = max(maxS, curS);
        }
    }
    printf("Max Sub array Sum = %d", maxS);

    return 0;
}