#include <stdio.h> //No return,No parameter
void add();
int main(void)
{
    add();
}
void add() // i/p process o/p will be done here
{
    int s, a, b;
    printf("Input a,b = ");
    scanf("%d%d", &a, &b); // I.P
    s = a + b;             // Process
    printf("Sum = %d", s); // O.p
}