/*
let, a= {1,2,3,4,5}
1 12 123 1234 12345
2 23 234 2345
3 34 345
4 45
5
*/
#include <stdio.h>
int main()
{
    int a[] = {1, 3, 5, 7, 9, 10}, st, end, i, n = 6;
    for (st = 0; st < n; st++) // Supplies start index
    {
        for (end = st; end < n; end++) // supply end index
        {
            for (i = st; i <= end; i++) // Traverse from start to end
                printf("%d,", a[i]);
            printf("  ");
        }
        printf("\n");
    }

    return 0;
}