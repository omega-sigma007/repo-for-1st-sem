#include <stdio.h>
#include <windows.h>
int main()
{
    FILE *fp;
    fp = fopen("life.txt", "r");

    if (fp == NULL)
        printf("Life.txt file not found\n");
    else
        printf("File found\n");

    // fprintf(fp, "hello\nLove you zindagi");
    char a[20], c;
    // while (fgets(a, 20, fp) !=NULL)
    // {
    //     Sleep(200);
    //     printf("%s", a);
    // }
    // fclose(fp);
    // printf("\n");

    // fp = fopen("life.txt", "r");
    c = fgetc(fp);
    while (c != '\0')
    {
        Sleep(100);
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);

    // int ch;
    // fp = fopen("life.txt", "a");
    // while (1)
    // {
    //     scanf("%d", &ch);
    //     if (ch == '#')
    //         break;
    //     fputc(ch, fp);
    // }
    // fclose(fp);
    fp = fopen("life.txt", "r");
    fputc('A', fp);

    fp = fopen("life.txt", "r");
    while (c != '\0')
    {
        Sleep(200);
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);
    return 0;
}