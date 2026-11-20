#include <stdio.h>
typedef struct
{
    char nm[20], bg[2];
    int age;
} person;
int main()
{
    int n;
    printf("Enter no. rows = ");
    scanf("%d", &n);
    person per[n];
    FILE *fp;
    fp = fopen("person.docx", "a");
    for (int i = 0; i < n; i++)
    {
        printf("Name = ");
        gets(per[i].nm);
        fputs(per[i].nm, fp);

        printf("Age = ");
        scanf("%d", &per[i].age);
        fprintf(fp, per[i].age);

        printf("Blood Group = ");
        gets(per[i].bg);
        fputs(per[i].bg, fp);
    }
    fclose(fp);
}