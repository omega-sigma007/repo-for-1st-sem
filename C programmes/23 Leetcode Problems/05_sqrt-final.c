#include <stdio.h>
int mySqrt(int x);
int main(int argc, char *argv[])
{
    int x = atoi(argv[1]), root;
    root = mySqrt(x);
    printf("sqrt(%d) ~= %d", x, root);

    return 0;
}
int mySqrt(int x)
{
    int st = 0, end = x, mid = x / 2;
    for (; st <= end; mid = st + (end - st) / 2)
    {
        if (x == 0 || x == 1)
            return end;
        else if (x / mid == mid)
            return mid;
        else if (x / mid < mid)
            end = mid - 1;
        else
            st = mid + 1;
    }
    return end;
}