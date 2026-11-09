// use,format,return value of fwrite()
#include <stdio.h>
#include <string.h>
int main()
{
    // fprintf(*FILE,*char)
    // Returns the number of element written in the file at the run time

    FILE *fp;
    char input[200];
    int n;

    fp = fopen("abc.docx", "a");
    printf("Enter the string = ");
    gets(input);

    n = fwrite(input, 1, strlen(input), fp);

    if (n > 0)
    {
        printf("Data is written\n");
        printf("Number of chars written = %d", n);
    }
    else
        printf("ERROR!!");

    fclose(fp);
    return 0;
}