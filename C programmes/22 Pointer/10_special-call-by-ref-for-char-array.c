#include <stdio.h>
void arr(int *);
int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    arr(a);
    return 0;
}
void arr(int *a)
{
    printf("Value =%d\t Adress = %u\n", *a, a);
    printf("1)Array = ");
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);

    printf("\n2)Array = ");
    for (int *b = a; a < b + 10; a++)
        printf("%d ", *a);
}