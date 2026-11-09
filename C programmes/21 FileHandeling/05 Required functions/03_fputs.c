// use,format,return value of fputs()
#include <stdio.h>
int main()
{
    // fputs(*char,*FILE)
    // it returns a int i.e. != -1, on successful printing
    // else returns EOF or -1
    FILE *fp;
    fp = fopen("abc.docx", "a");
    char ch[100];
    printf("String = ");
    gets(ch);
    int n;
    n = fputs(ch, fp);
    if (n != -1)
    {
        printf("Value = %d\n");
        printf("Data printeed in the file!!");
    }
    else
    {
        printf("Value = %d\n");
        printf("ERROR!!");
    }

    fclose(fp);
    return 0;
}