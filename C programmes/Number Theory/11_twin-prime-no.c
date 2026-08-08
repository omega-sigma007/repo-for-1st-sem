#include <stdio.h>
void main()
{
    int a, b, i = 2, j = 2, f = 0;
    printf("Enter the no. = ");
    scanf("%d%d", &a, &b);
    for (; i <= a / 2, j <= b / 2; i++, j++)
    {
        if (a % i == 0 || j % i == 0)
            break;
    }
    if (i < a / 2 || j < b / 2)
        printf("(%d,%d) are not twisted prime", a, b);
    else
    {
        printf("%d ,%d = Prime no\n", a, b);
        (abs(a - b) == 2) ? printf("(%d,%d) are twin rime no.", a, b) : printf("(%d,%d) are not twin prime no.", a, b);
    }
}