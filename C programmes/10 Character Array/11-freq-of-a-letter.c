#include <stdio.h>
void main()
{
    int i, l[100], count = 0;
    char x[100], ser;
    printf("Enter the string = ");
    gets(x);
    printf("Enter the leter to be searched = ");
    scanf("%c", &ser);
    for (i = 0; x[i] != '\0'; i++)
    {
        if (x[i] == ser)
        {
            l[count] = i;
            count++;
        }
    }
    if (count == 0)
        printf("Character not found!!");
    else
    {
        printf("Character found!!\nAnd present in indices:");
        for (i = 0; i < count; i++)
            printf("%d ", l[i]);
    }
}