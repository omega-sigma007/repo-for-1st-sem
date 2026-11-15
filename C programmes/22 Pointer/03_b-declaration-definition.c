#include <stdio.h>
int main()
{
    // Exploring each type of pointer
    // normal variable type
    int a = 10, *pta;
    float b = 3.14, *ptb;
    char ch = 'a', *ptch;
    // pointing
    pta = &a, ptb = &b, ptch = &ch;

    // printing
    printf("--------------------------------------------------------------------------\n");
    printf("Adress of variable\tAdress pointed by pointer\tValue from pointer\n");
    printf("--------------------------------------------------------------------------\n");
    printf("&a  = %u\t\t pta = %u\t\t\t  *pta  = %d\n", &a, pta, *pta);
    printf("&b  = %u\t\t ptb = %u\t\t\t  *ptb  = %.2f\n", &b, ptb, *ptb);
    printf("&ch = %u\t\t ptch = %u\t\t\t *ptch = %d\n", &ch, ptch, *ptch);
}