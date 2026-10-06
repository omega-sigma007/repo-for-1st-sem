#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int m;
    int c;
} line;
struct point
{
    float x;
    float y;
} point;
int main(void)
{
    while (1)
    {
        line l1, l2;
    input_for_line1:
        {
            printf("\nEnter for 1st line :- \n");
            printf("Enter the slope = ");
            scanf("%d", &l1.m);
            printf("Enter the Y-intercept = ");
            scanf("%d", &l1.c);
        }

    input_for_line2:
        {
            printf("Enter for 2nd line :- \n");
            printf("Enter the slope = ");
            scanf("%d", &l2.m);
            printf("Enter the Y-intercept = ");
            scanf("%d", &l2.c);
        }
    calculation:
        {
            if (l1.m == l2.m)
            {
                printf("Point of intersection can't be obtained");
                exit('a');
            }
            else
            {
                point.x = (l2.c - l1.c) / (l1.m - l2.m);
                point.y = (l1.m * l2.c - l2.m * l1.c) / (l1.m - l2.m);
            }
            printf("Point of intersection = (%.3f,%.3f)", point.x, point.y);
        }
    }
}