#include <stdio.h> //Takes parameter , do return
int add(int, int);
int main(void) // I.p + O.p
{
    int a, b;
    printf("Input a,b = ");
    scanf("%d%d", &a, &b);
    printf("Sum = %d", add(a, b));
}
int add(int a, int b) // Process
{
    int sum;
    sum = a + b;
    return a + b;
}