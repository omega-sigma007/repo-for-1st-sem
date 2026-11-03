#include <stdio.h>
int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int i, j, sp, n = atoi(argv[1]);
        for (i = 1; i <= n; i++)
        {
            for (sp = n - 1; sp >= i; sp--)
                printf(" ");
            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");
            printf("\n");
        }
    }
    else
        printf("Wrong arguments!!");
}