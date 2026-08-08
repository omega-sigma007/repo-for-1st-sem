#include <stdio.h>
void grade(float marks);
void main()
{
    int total, p, c, m, cs, e;
    float avg;
    printf("\tWe have 5 Subs");
    printf("\nEnglish  Physics  Chem\tMaths\tCS");
    printf("\n\n**Enter your sub wise marks out of 100**\n");

    printf("Eng = ");
    scanf("%d", &e);
    printf("Physics = ");
    scanf("%d", &p);
    printf("Chem = ");
    scanf("%d", &c);
    printf("Maths = ");
    scanf("%d", &m);
    printf("CS = ");
    scanf("%d", &cs);
    printf("-------------\n");

    printf("\nSub\tMarks\tGrade");
    printf("\n---\t-----\t-----");
    printf("\nEng\t%d\t", e);
    grade(e);
    printf("\nPhy\t%d\t", p);
    grade(p);
    printf("\nChe\t%d\t", c);
    grade(c);
    printf("\nMath\t%d\t", m);
    grade(m);
    printf("\nCs\t%d\t", cs);
    grade(cs);
    printf("\n------------------------------------");
    total = e + p + c + m + cs;
    avg = total / 5;
    printf("\nTotal\t%d\t-\tOut of 500", total);
    printf("\nAvg\t%f\t", avg);
    grade(avg);
    printf("\n------------------------------------");
}
void grade(float marks)
{
    if (marks < 40 && marks >= 0)
        printf("D");
    else if (marks < 60)
        printf("C");
    else if (marks < 80)
        printf("B");
    else if (marks < 90)
        printf("A");
    else if (marks <= 100)
        printf("AA");
    else
        printf("NA");
}