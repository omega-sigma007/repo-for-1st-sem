#include <stdio.h>
struct Marksheet
{
    int phy, chem, math, total;
    float percent;
};
int main(void)
{
    struct Marksheet arun; // Example of a structure variable
    printf("Enter the marks of Arun Out of 100:-\n");
    printf("Maths = ");
    scanf("%d", &arun.math);
    printf("Chem = ");
    scanf("%d", &arun.chem);
    printf("Phy = ");
    scanf("%d", &arun.phy);
Calculations:
    {
        arun.total = arun.chem + arun.math + arun.phy;
        arun.percent = arun.total / 3;
    }
    printf("****MARKSHEET****\n");
    printf("Maths = %d\n", arun.math);
    printf("Physics = %d\n", arun.phy);
    printf("Chem = %d\n", arun.chem);
    printf("Total = %d\n", arun.total);
    printf("Percent = %f\n", arun.percent);
}