#include <stdio.h>
int main()
{
    printf("hello\nEOF = %d\n", EOF);
    char c[10];
    char source[] = "yes";
    int found = sscanf(source, "%[eyo]", &c);
    if (found > 0)
    {
        printf("Found %s", c);
    }
    else
    {
        printf("Character not found");
    }
    return 0;
}