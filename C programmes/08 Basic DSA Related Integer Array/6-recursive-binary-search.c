#include <stdio.h>
int binarySer(int *a,int ser, int st, int end)
{
    int mid = (st + end) / 2;
    if (st <= end)
    {
        if (ser==a[mid])
            return mid;
        else if (ser < a[mid])
        {
            end = mid - 1;
            return binarySer(a,  ser, st, end);
        }
        else
        {
            st = mid + 1;
            return binarySer(a, ser, st, end);
        }
    }
    else
        return -1;
}
void sort(int *a, int n);
int main()
{
    int arrSize, ser, cond;
    printf("Enter array size = ");
    scanf("%d", &arrSize);
    int a[arrSize];

    // Input in the array
    for (int i = 0; i < arrSize; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Search element = ");
    scanf("%d", &ser);

    // calling
    sort(a, arrSize);
    // print the sorted array
    printf("\nAfter sorting :-\n");
    for (int i = 0; i < arrSize; i++)
        printf("%d ", a[i]);
    printf("\n");

    cond = binarySer(a, ser, 0, arrSize - 1);

    if (cond != -1)
        printf("%d Found!! %d index", ser, cond);
    else
        printf("%d not Found!! \t %d index", ser, cond);
    return 0;
}
void sort(int *a, int n)
{
    int i, j, sm, temp;
    for (i = 0; i <= n - 2; i++)
    {
        for (j = i, sm = i; j < n; j++)
            if (a[j] < a[sm])
                sm = j;
        temp = a[i];
        a[i] = a[sm];
        a[sm] = temp;
    }
}