#include <stdio.h>
typedef struct
{
    char nm[20], bg[2];
    int age;
} person;
int main()
{
    person per[10];
    FILE *fp;
    fp = fopen("person.docx", "a");
    for (int i = 0; i < 10; i++)
    {
        printf("Name = ");
        gets(per[i].nm);

        printf("Age = ");
        scanf("%d", &per[i].age);
        printf("Blood Group = ");
        gets(per[i].bg);
    }
}