#include <stdio.h>
int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
        printf("\nAt argv[%d] = %s", i, argv[i]);
    return 0;
}