// use,format,return value of fgetc()
#include <stdio.h>
#include <windows.h>
int main()
{
    // fgetc(*FILE)
    // returns each characters from the file
    FILE *fp;
    char ch[100];
    fp = fopen("abc.docx", "r");

    int n = fread(ch, 1, 1, fp);
    while (n != 0)
    {
        ch[n] = '\0';
        printf("%s", ch);
        n = fread(ch, 1, 1, fp);
        // Sleep(200);
    }

    fclose(fp);
    return 0;
}