#include <stdio.h>
int mySqrt(int x)
{
    // optimaisation on 03_a-sqrt-x.c
    int i = 2;
    while (i <= x / i)
        i++;
    if ((i - 1) * (i - 1) == x)
        return i - 1;
    else
    {
        int a = i - 1;
        int p = x - a * a; //(x-a) maths
        return a + p * (1 - p / (4.0 * a * a)) / (2.0 * a);
    }
}
int main(int argc, char *argv[])
{
    int x = atoi(argv[1]), root;
    root = mySqrt(x);
    printf("sqrt(%d) ~= %d", x, root);
}