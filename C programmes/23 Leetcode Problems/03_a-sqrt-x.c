// Binary Search
// Q 69
#include <stdio.h>
int sqrt(int x)
{
    int i = 2;
    while (i * i <= x)
        i++;
    if ((i - 1) * i - 1 == x)
        return i - 1;
    else
    {
        int a = i - 1;
        return a + (x - a * a) / (2 * a);
    }
}
int main(int argc, char *argv[])
{
    int x = atoi(argv[1]), root;
    root = sqrt(x);
    printf("sqrt(%d) ~= %d", x, root);
}