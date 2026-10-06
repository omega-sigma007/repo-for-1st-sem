#include <stdio.h>
#include <string.h>
struct personal_details
{
    char nm[20];
    int age;
    char BloodGroup[2];
} s1, s2;

int main(void)
{
    strcpy(s1.BloodGroup, "B+");
    strcpy(s1.nm, "Abir");
    strcpy(s2.BloodGroup, "AA");
    strcpy(s2.nm, "Priya");
    while (1)
    {
        printf("\nEnter age for student 1 = ");
        scanf("%d", &s1.age);
        printf("Enter age for student 2 = ");
        scanf("%d", &s2.age);
        printf("\n\nStudent 1:-\n");
        printf("Name = %s\n", s1.nm);
        printf("Age = %d\n", s1.age);
        printf("BLood Group = %s\n", s1.BloodGroup);
        printf("\n\nStudent 2:-\n");
        printf("Name = %s\n", s2.nm);
        printf("Age = %d\n", s2.age);
        printf("BLood Group = %s", s2.BloodGroup);
    }
}