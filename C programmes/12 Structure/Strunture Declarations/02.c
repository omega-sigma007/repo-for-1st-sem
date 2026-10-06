#include <stdio.h>
struct personal_details
{
    char nm[20];
    int age;
    char DOB[11];
};

int main(void)
{
    struct personal_details me = {.nm = "Abir", .DOB = "03/03/2007"};
    me.age = 19;
    struct personal_details arun = {"Arun", 19, "19/06/2007"};
me:
    {
        printf("\nMy Details :-\n");
        printf("Name: %s\n", me.nm);
        printf("Age = %d\n", me.age);
        printf("DOB = %s\n", me.DOB);
    }
arun:
    {
        printf("\nArun's Details :-\n");
        printf("Name: %s\n", arun.nm);
        printf("Age = %d\n", arun.age);
        printf("DOB = %s\n", arun.DOB);
    }
    return 0;
}