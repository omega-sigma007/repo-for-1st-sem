// use,format,return value of fgets()
#include <stdio.h>
#include <windows.h>
int main()
{
    // fgets(*char,(int)i.e. the max ammount of data to  be write into *char,*FILE)
    FILE *fp;
    char read[200];
    fp = fopen("abc.docx", "r");
    while (fgets(read, 20, fp) != NULL)
    {
        printf("%s", read);
        Sleep(200);
    }

    fclose(fp);
    return 0;
}
