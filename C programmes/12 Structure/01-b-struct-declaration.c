#include <stdio.h>
struct student
{
    int s_id;
    char s_name[20];
    int age;
};
int main()
{
    struct student s[2] = {
        {1, "Abir", 19},
        {2, "shreya", 10}};
    for (int i = 0; i < 2; i++)
    {
        printf("Details of student %d :-\n", i + 1);
        printf("S_id = %d\nS_name = %s\nAge = %d\n\n", s->s_id, s->s_name, s->age);
    }
    return 0;
}