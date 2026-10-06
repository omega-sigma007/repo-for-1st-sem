#include <stdio.h>
void main()
{
    int n, a;
    char ch;
    printf("\n**MENU**\n");
    printf("Press 1 for chr to ASCII\n");
    printf("Press 2 for ASCII to chr\n");
    printf("Enter your choice = ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        // char ch;
        printf("Enter the character = ");
        scanf("%c", &ch);
        printf("ASCII of %c = %d", ch, ch);
        break;
    case 2:
        // int a;
        printf("Enter The ASCII = ");
        scanf("%d", &a);
        printf("%d = %c", a, a);
        break;
    default:
        printf("!!! Enter the correct choice !!!");
    }
}