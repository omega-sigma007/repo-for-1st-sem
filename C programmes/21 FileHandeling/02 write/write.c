#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char fname[10], ch, eof[] = "EOF";
    printf("Enter the file name = ");
    scanf("%s", fname);
    fp = fopen(fname, "w");
    printf("write content : ");
    while (1)
    {
        scanf("%c", ch);
        fputc(ch, fp);
        if (ch == '*')
            break;
    }
    fp = fopen(fname, "r");
    while (fgetc(fp) != EOF)
    {
        printf("%c", fgetc(fp));
    }
}