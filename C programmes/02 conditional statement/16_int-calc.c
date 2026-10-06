#include <stdio.h>
void main()
{
    char ch;
    int p, r = 0;
    float t;
    printf("Enter your gender = ");
    scanf("%c", &ch);
    printf("enter your A/C ballance = ");
    scanf("%d", &p);
    if (ch == 'm' || ch == 'M')
        (p >= 5000) ? r = 2 : printf("Sorry!!\n");
    else if (ch == 'f' || ch == 'F')
        (p >= 3000) ? r = 5 : printf("Sorry!!\n");
    else if (ch == 't' || ch == 'T')
        (p >= 2000) ? r = 8 : printf("Sorry!!\n");

    t = p * (1 + (r * 1.0) / 100);
    printf("Your current A/C ballence is = %.2f\n", t);
}