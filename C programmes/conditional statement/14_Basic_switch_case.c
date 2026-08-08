#include <stdio.h>
void main()
{
    int n;
    printf("We have :-\n");
    printf("\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n6.Saturday\n7.Sunday");
    printf("\n\nEnter the no = ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Mon");
        break;
    case 2:
        printf("Tue");
        break;
    case 3:
        printf("Wed");
        break;
    case 4:
        printf("Thu");
        break;
    case 5:
        printf("Fri");
        break;
    case 6:
        printf("Sat");
        break;
    case 7:
        printf("Sun");
        break;
    default:
        printf("Please enter a valid int !!");
        break;
    }
}