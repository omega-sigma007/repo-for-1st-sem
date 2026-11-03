#include <stdio.h>
int main(int argc, char *argv[])
{
    if (argc == 3)
    {
        int a = atoi(argv[1]), b = atoi(argv[2]);
        if (a > b)
            printf("%d is greatest\n", a);
        else if (b > a)
            printf("%d is greatest\n", b);
        else
            printf("%d,%d Both are equal", a, b);
    }
    else
        printf("Wrong arguments!!");
}