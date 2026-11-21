// Binaryy Search (considering the array is sorted)
// 35. Search Insert position
#include <stdio.h>
void print_arr(int *, int);
int Bser(int *a, int n, int ser)
{
    int st = 0, end = n - 1, mid = (n - 1) / 2;
    for (; st <= end; mid = st + (end - st) / 2)
    {
        if (ser == a[mid])
            return mid;
        else if (ser < a[mid])
            end = mid - 1;
        else
            st = mid + 1;
    }
    return end + 1;
}
int main()
{
    int n, ser;
    printf("n = ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array in sorted form :-\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("ser = ");
    scanf("%d", &ser);
    print_arr(a, n);

    int val = Bser(a, n, ser);
    if (ser == a[val])
        printf("\n%d Found!! \t %d Index", ser, val);
    else
        printf("\n%d Not Found!! \t Hyppothetical Index = %d", ser, val);
}
void print_arr(int *a, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
/* optimum from time complexity
int searchInsert(int* a, int n, int tar)
{
    int st=0,end=n-1,mid=end/2;

    for(;st<=end; mid=st+(end-st)/2)
    {
        if(tar == a[mid])
            return mid;
        else if(tar<a[mid])
            end = mid - 1;
        else
            st = mid + 1;
    }
    return st;
}
*/

/*best optimum from time cplx but 65.5% better from space cplx

int searchInsert(int* a, int n, int tar)
{
    int st=0,end=n-1;
    n=end/2;

    for(;st<=end; n=st+(end-st)/2)
    {
        if(tar == a[n])
            return n;
        else if(tar<a[n])
            end = n - 1;
        else
            st = n + 1;
    }
    return st;
}
*/