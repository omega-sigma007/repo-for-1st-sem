#include <stdio.h>
int main(int argc, char *argv[])
{
    for (int i = 1, j; i < argc; i++)
    {
        for (j = 0; argv[i][j] != '\0'; j++)
            printf("%c", argv[i][j]);
        printf("\n");
    }
}