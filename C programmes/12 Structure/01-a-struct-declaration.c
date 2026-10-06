#include <stdio.h>
struct personal_details
{
    char name[100];
    int age;
    char country[20];
};
int main()
{
    struct personal_details p[10];
    printf("Enter name = ");
    scanf("%s", &p[0].name);
    printf("Enter age = ");
    scanf("%d", &p[0].age);
    printf("Enter country = ");
    scanf("%s", &p[0].country);
    printf("%s %d %s", p[0], p[0], p[0]);
    return 0;
}