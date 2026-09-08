#include <stdio.h>
#include <string.h>
void main()
{
    /*
    strcmp -> compares 2 strings considering its case
    it returns :-
    1 , when x>y
    0 , when x=y
   -1 , when x<y
    strcmpi -> compares 2 strings ignore case
    */
    char x[20], y[20], f;
    printf("Enter the 1st string = ");
    gets(x);
    printf("Enter the 2nd string = ");
    gets(y);
    printf("1st string = %s", x);
    printf("\n2nd string = %s", y);
    f = strcmp(x, y);
    if (f == 0)
        printf("\nString matched");
    // if (f == 1)
    else
        printf("\nString unmatched");
    printf("\nf = %d ", f);
}