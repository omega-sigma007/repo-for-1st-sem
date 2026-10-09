#include <stdio.h> //Takes parameter , No return
void add(int, int);
int main(void) // I.p here
{
    int a, b;
    printf("Input a,b = ");
    scanf("%d%d", &a, &b);
    add(a, b);
}
void add(int a, int b) // process + O.P here
{
    int sum;
    sum = a + b;
    printf("Sum = %d", sum);
}