#include <stdio.h>
#include <string.h>
void main()
{
    /*
    strcmpi -> case insensitive on comparing 2 strings
    it returns :-
       1 , when x>y
       0 , when x=y
      -1 , when x<y
    similar to strcmp, diffeer on incase of character case.

    */
    char x[20], y[20], f;
    printf("Enter the 1st string = ");
    gets(x);
    printf("Enter the 2nd string = ");
    gets(y);
    printf("1st string = %s", x);
    printf("\n2nd string = %s", y);
    f = strcmpi(x, y);
    if (f == 0)
        printf("\nString matched");
    // if (f == 1)
    else
        printf("\nString unmatched");
    printf("\nf = %d ", f);
}