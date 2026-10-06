#include <stdio.h>
#include <string.h>

int count(char str[50], char ser[25]);
int main(void)
{
    int c = 0, i, k, j, l, lenStr, sp = 0;
    char str[50] = "", ser[25] = "", serpk[100] = "";
    printf("String = ");
    gets(str);

    for (lenStr = 2; lenStr <= strlen(str) / 2; lenStr++)
    {
        sp = 0;
        for (l = 0;; l++)
        {
            if (str[l + lenStr - 1] == '\0')
                break;
            for (j = 0, k = l; j < lenStr; j++, k++, sp++)
            {

                ser[j] = str[k];
                serpk[sp] = str[k];
            }
            ser[j] = '\0';
            if (sp > lenStr)
            {
                int t;
                t = count(serpk, ser);
                if (!t)
                {
                    t = count(str, ser);
                    if (t >= 2)
                        c++;
                }
            }
        }
        for (int t = 0; t < 25; t++)
            serpk[t] = '\0';
    }

    printf("SubString %sfound", (c) ? "" : "not ");
    if (c)
        printf("\nno. of Such Substr whose occurence >=2 is = %d", c);
}
int count(char str[50], char ser[25])
{
    int i, j, k, f = 0, c = 0;
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
            c++;
        if (c >= 2)
            break;
    }
    return c;
}