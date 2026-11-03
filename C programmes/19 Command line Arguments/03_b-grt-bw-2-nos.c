#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    if (argc == 3)
    {
        int a = strtoi(argv[1]), b = strtoi(argv[2]);
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