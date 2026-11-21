/*
step 1: Traverse the array with a single loop
step 2: The momment we got our total sum -ve reset the surrent sum to 0
*/
#include <stdio.h>
#define max(a, b) (a > b) ? a : b
int main()
{
    int i = 0, curS = 0, maxS, n = 7;
    int a[] = {-53, -14, 5, 4, -11, 7, -8};

    for (maxS = a[0]; i < n; i++)
    {
        curS += a[i];
        maxS = max(curS, maxS);
        if (curS < 0)
            curS = 0;
        // It is better to reset the current sum to 0 than to add the large -ve no.
    }
    printf("Max Sub array Sum = %d", maxS);

    return 0;
}