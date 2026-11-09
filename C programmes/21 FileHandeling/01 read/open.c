#include <stdio.h>
int main()
{
    FILE *fp;
    char fname[20], ch;
    printf("Enter the file name to be opend = ");
    scanf("%s", fname);
    fp = fopen(fname, "r");
    while (ch != EOF)
    {
        ch = fgetc(fp);
        printf("%c", ch);
        sleep(2);
    }
}