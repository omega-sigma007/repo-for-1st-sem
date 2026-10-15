#include <stdio.h> //No parameter ,do return
int sum();
int main(void)
{
    printf("Sum = %d", sum()); // O.p
}
int sum() // I.P + process
{
    int a, b;
    printf("Input a,b = ");
    scanf("%d%d", &a, &b);
    return a + b;
}
