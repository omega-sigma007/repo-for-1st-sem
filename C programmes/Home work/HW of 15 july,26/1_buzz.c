#include <stdio.h> // 7,147
void main()
{
    int a;
    printf("Enter the number = ");
    scanf("%d", &a);
    if (a % 7 == 0 && a % 10 == 7)
        printf("%d is a buzz no.", a);
    else
        printf("%d isnot a buzz no.", a);
}