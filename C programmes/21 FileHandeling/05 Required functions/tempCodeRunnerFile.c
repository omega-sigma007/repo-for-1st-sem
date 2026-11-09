// use,format,return value of fgetc()
#include <stdio.h>
#include <windows.h>
int main()
{
    // fgetc(*FILE)
    // returns each characters from the file
    FILE *fp;
    char ch;
    fp = fopen("abc.docx", "r");
