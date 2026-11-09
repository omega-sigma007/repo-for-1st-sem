#include <stdio.h>
#include <windows.h>
int main()
{
    FILE *fp;
    // fclose(fp);
    // fp = fopen("life.docx", "w");
    // fprintf(fp, "My name is Abir");
    // fclose(fp);

    // fp = fopen("life.docx", "r");
    // char c;
    // c = fgetc(fp);
    // while (c != -1)
    // {
    //     printf("%c", c);
    //     Sleep(200);
    //     c = fgetc(fp);
    // }
    // fclose(fp);

    // char data[20];
    // int n;
    // fp = fopen("life.docx", "r");
    // while (n != 0)
    // {
    //     n = fread(data, 2, 6, fp);
    //     printf("%d", n);
    //     data[n] = '\0';
    //     printf("%s", data);
    //     Sleep(2000);
    // }
    // fclose(fp);
    remove("life.txt");
}