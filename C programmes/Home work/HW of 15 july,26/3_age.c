#include <stdio.h>
void main()
{
    int age;
    printf("Enter the age = ");
    scanf("%d", &age);
    if (age >= 100 || age < 0)
        printf("Not Applicable");
    else if (age >= 60)
        printf("Old age");
    else if (age >= 35)
        printf("Middle age");
    else if (age >= 18)
        printf("Young");
    else if (age >= 12)
        printf("Teen");
    else if (age >= 6)
        printf("Child");
    else if (age >= 0)
        printf("Infant");
}