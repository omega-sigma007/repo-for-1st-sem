#include <stdio.h>
#include <string.h>
void main()
{
    // strrev(x) ->  x theke copy kpre x ei store kore
    char str[20];
    printf("Enter the string = ");
    gets(str);
    printf("Initial string = %s", str);
    strrev(str);
    printf("\nFinal string = %s", str);
}