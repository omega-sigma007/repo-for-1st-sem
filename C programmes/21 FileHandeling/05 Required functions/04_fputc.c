// use,format,return value of fputs()
#include <stdio.h>
int main()
{
    // fputs(*char,*FILE)
    //
    FILE *fp;
    fp = fopen("abc.docx", "a");

    char ch;
    printf("String = ");
    while (1)
    {
        scanf("%c", &ch);
        if (ch == '&')
            break;
        else
            fputc(ch, fp);
    }
    fclose(fp);
    return 0;
}