#include <stdio.h>
int mySqrt(int x)
{
    // optimaisation on 03_a-sqrt-x.c
    int i = 2;
    while (i <= x / i)
        i++;
    return i - 1;
}
int main(int argc, char *argv[])
{
    int x = atoi(argv[1]), root;
    root = mySqrt(x);
    printf("sqrt(%d) ~= %d", x, root);
}