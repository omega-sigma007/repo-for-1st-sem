#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    // goto char_declaration;
    // Understanding multilevel nesting loops.
    int i, j, k, l, m, n;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            for (k = 1; k <= 5; k++)
            {
                for (l = 1; l <= 5; l++)
                    printf("* ");
                printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
char_declaration:
    {

        char s[] = "Hello Abir";
        printf("%s", s);
        // exit('y');
    }
    {
        printf("\nHello");
    }
    return printf("\nHi");
}