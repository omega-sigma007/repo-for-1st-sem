#include <stdio.h>
int count(char str[50], char ser[25])
{
    int i, j, k, f = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        j = 0, f = 0;
        if (str[i] == ser[j])
            for (j = 1, k = i + 1; ser[j] != '\0';)
            {
                if (str[k] == ser[j])
                    k++, j++;
                else
                    break;
                if (ser[j] == '\0')
                    f = 1;
            }
        if (f)
            break;
    }
    return f;
}
int main(void)
{
    int c;
    char str[50], ser[25];
    printf("String = ");
    gets(str);
    printf("sub str = ");
    gets(ser);
    c = count(str, ser);
    printf("SubString %sfound", (c) ? "" : "not ");
}