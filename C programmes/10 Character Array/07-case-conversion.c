#include <stdio.h>
void main()
{
    int n, i;
    char x[100];
    printf("Enter the string = ");
    gets(x);
    printf("\t****MENU****");
    printf("\nPress 1 to make all SMALL");
    printf("\nPress 2 to make all CAPS");
    printf("\nEnter n = ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        for (i = 0; x[i] != '\0'; i++)
        {
            if (x[i] >= 65 && x[i] <= 90)
                printf("%c", x[i] + 32);
            else
                printf("%c", x[i]);
        }
        break;
    case 2:
        for (i = 0; x[i] != '\0'; i++)
        {
            if (x[i] >= 97 && x[i] <= 122)
                printf("%c", x[i] - 32);
            else
                printf("%c", x[i]);
        }
        break;
    }
}