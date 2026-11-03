// atoi(),atof()
#include <stdio.h>
int main(int argc, char *argv[])
{
    int a;
    float b;
    if (argc == 3)
    {
        a = atoi(argv[1]);
        b = atof(argv[2]);
        printf("\nint = %d", a);
        printf("\nfloat = %f", b);
    }
    else
        printf("Wrong arguments!!");
}