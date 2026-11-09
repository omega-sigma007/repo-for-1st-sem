#include <stdio.h>
#include <windows.h>
int main()
{
    while (1)
    {
        FILE *fp;
        char mode, data[20000], ch;
        int len;
        printf("Enter 'a' for append\n");
        printf("Enter 'r' for read\n");
        printf("Enter your choice = ");
        scanf(" %c", &mode); // Important checkup
        switch (mode)
        {
        case 'a':
            fp = fopen("abir.docx", "a");
            printf("On pressing '^' the input will be terminated\n");
            printf("String = ");
            while (1)
            {
                scanf("%c", &ch);
                if (ch == '^')
                    break;
                else
                    fputc(ch, fp);
            }
            fclose(fp);
            break;
        case 'r':
            fp = fopen("abir.docx", "r");
            printf("Input the ammount of characters to be taken at a time  = ");
            scanf("%d", &len);
            printf("FIle data......\n");
            printf("......................................................................");
            while (fgets(data, len + 1, fp) != NULL)
            {
                printf("%s", data);
                Sleep(200);
            }
            printf("......................................................................\n");
            fclose(fp);
            break;
        default:
            printf("Make a valid choice !!\n\n");
        }
    }
}