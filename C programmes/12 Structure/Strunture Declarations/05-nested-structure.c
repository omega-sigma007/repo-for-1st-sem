// Take input name and DOB and show the age AT 1st oct,2026
#include <stdio.h>
typedef struct
{
    int DD, MM, YYYY;
} DOB;
typedef struct // Using typedef
{
    char nm[20];
    DOB DOB;
} bio;

int main(void)
{
    struct age
    {
        int DD, MM, YYYY;
    } age;
    struct date
    {
        int DD, MM, YYYY;
    } date;

    bio x;
input:
    {
        printf("Name = ");
        gets(x.nm);
        printf("Enter Your DOB in this format DD/MM/YYYY = ");
        scanf("%d/%d/%d", &x.DOB.DD, &x.DOB.MM, &x.DOB.YYYY);
        printf("Enter Today's DATE in this format DD/MM/YYYY = ");
        scanf("%d/%d/%d", &date.DD, &date.MM, &date.YYYY);
    }
calculation:
    {
        age.DD = 30 + date.DD - x.DOB.DD;
        age.MM = 11 + date.MM - x.DOB.MM;
        age.YYYY = date.YYYY - 1 - x.DOB.YYYY;
        if (age.DD >= 30)
        {
            age.MM += age.DD / 30;
            age.DD = age.DD % 30;
        }
        if (age.MM >= 12)
        {
            age.YYYY += age.MM / 12;
            age.MM = age.MM % 12;
        }
    }
output:
    {
        printf("Name = %s\n", x.nm);
        printf("DOB = %s%d/%s%d/%d\n", (x.DOB.DD / 10) ? "" : "0", x.DOB.DD, (x.DOB.MM / 10) ? "" : "0", x.DOB.MM, x.DOB.YYYY);
        printf("Age = %d years   %d months   %d days", age.YYYY, age.MM, age.DD);
    }
}