#include <stdio.h>
int binarySearch(int *, int, int);
void sort(int *, int);
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

    // search
    cond = binarySearch(a, arrSize, ser);

    if (cond != -1)
        printf("%d Found!! %d index", ser, cond);
    else
        printf("%d not Found!!", ser);
    return 0;
}
int binarySearch(int *a, int n, int ser)
{
    int st = 0, end = n - 1, mid = st + (end - st) / 2;
    for (; st <= end; mid = st + (end - st) / 2) // The optimisation took place in the updation of mid
    {
        if (ser > a[mid])
            st = mid + 1;

        else if (ser < a[mid])
            end = mid - 1;
        else if (ser == a[mid])
            return mid;
    }
    return -1;
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