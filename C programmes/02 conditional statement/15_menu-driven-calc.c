#include <stdio.h>
void main()
{
    int n, a, b;
    printf("We have :-\n\n");
    printf("press 1 for Addition\n");
    printf("press 2 for Subtraction\n");
    printf("press 3 for Multiplication\n");
    printf("press 4 for Division\n");
    printf("Enter your choice = ");
    scanf("%d", &n);
    if (n >= 1 && n <= 4)
    {
        printf("Enter the 2 no = ");
        scanf("%d%d", &a, &b);
    }
    switch (n)
    {

    case 1:
        printf("Addition = %d", a + b);
        break;
    case 2:
        printf("Subtraction = %d", a - b);
        break;
    case 3:
        printf("Multiplication = %d", a * b);
        break;
    case 4:
        printf("Division = %f", a / (b * 1.0));
        break;
    default:
        printf("Please make a valid choice!!");
        break;
    }
}
