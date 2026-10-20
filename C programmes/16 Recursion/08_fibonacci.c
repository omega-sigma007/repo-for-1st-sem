#include <stdio.h> //1,1,2,3,5,8, ...
int fibo(int);
int main(void)
{
    int n, i;
    printf("n = ");
    scanf("%d", &n);
    printf("Series :-\n");
    for (i = 1; i <= n; i++)
        printf("%d ", fibo(i));
}
int fibo(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}
