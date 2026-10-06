#include <stdio.h>
int main(void)
{
    int i, j, k, f = 0, c = 0;
    char str[50], ser[25];
    printf("String = ");
    gets(str);
    printf("sub str = ");
    gets(ser);
    for (i = 0; str[i] != '\0'; i++)
    {
        j = 0, f = 0;
        if (str[i] == ser[j])
            for (j = 1, k = i + 1; ser[j] != '\0';)
            {
                if (str[k] == ser[j])
                {
                    k++;
                    j++;
                }
                else
                    break;
                if (ser[j] == '\0')
                    f = 1;
            }
        if (f)
            c++;
    }
    printf("SubString %sfound", (c) ? "" : "not ");
    if (c)
        printf("\nSubstring present %d times", c);
}