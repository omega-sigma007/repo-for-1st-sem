#include <stdio.h>
void main()
{
    int i, v, c, s;
    v = c = s = 0;
    char x[10000];
    printf("Enter the string = ");
    gets(x);
    for (i = 0; x[i] != '\0'; i++)
    {
        printf("%c", x[i]);
        switch (x[i])
        {
        case ' ':
            s++;
            break;
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            v++;
            break;
        default:
            c++;
        }
    }
    printf("\nVowels = %d\tConsonants = %d\tSpaces = %d", v, c, s);
}