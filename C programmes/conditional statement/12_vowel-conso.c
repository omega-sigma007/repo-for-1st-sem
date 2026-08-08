#include <stdio.h>
void main()
{
    char t;
    printf("Enter the letter = ");
    scanf("%c", &t);
    if (t == 'A' || t == 'a' || t == 'E' || t == 'e' || t == 'I' || t == 'i' || t == 'O' || t == 'o' || t == 'U' || t == 'u')
        printf("%c = Vowel", t);
    else if ((t >= 65 && t <= 90) || (t >= 97 && t <= 122))
        printf("%c = consonant", t);
    else
        printf("Enter a letter !!");
}