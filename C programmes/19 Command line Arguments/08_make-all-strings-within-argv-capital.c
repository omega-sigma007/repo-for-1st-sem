#include <stdio.h>
int main(int argc, char *argv[])
{
    for (int i = 1, j; i <= argc; i++)
    {
        printf("old = %s\t", argv[i]);
        for (j = 0; argv[i][j] != '\0'; j++)
            if (argv[i][j] >= 97 && argv[i][j] <= 122)
                argv[i][j] -= 32;
        printf("new = %s\n", argv[i]);
    }
}