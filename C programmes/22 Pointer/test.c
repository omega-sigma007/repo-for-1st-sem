#include <stdio.h>
void str(int *);
int main()
{
    char a[20] = "hi";
    printf("String = ");
    gets(a);
    str(a);
    printf("in main,Size = %d\n", sizeof(a));
}
void str(int *a)
{
    printf("String = %s\n", a);
    printf("in fn,Size = %d\n", sizeof(a));
}