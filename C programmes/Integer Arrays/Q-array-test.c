#include <stdio.h>
void main()
{
    int ar[1];
    ar[0] = 5;
    ar[1] = 100;
    ar[2] = 3;
    ar[5] = 10;
    ar[10];
    printf("%d \n", ar[0]);
    printf("%d \n", ar[1]);
    printf("%d \n", ar[2]);
    printf("%d \n\n", ar[5]);
    for (int i = 0; i <= 10; i++)
        printf("%d \n", ar[i]);
    //     int a[100], min, k;
    //     min = a[0];
    //     if(a[9]<a[min])
    //         min = j;
}