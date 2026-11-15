// reverse the string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20] = "ho", *ptr = &str[0];
    printf("Adress = %u\n", ptr);
    printf("Adress = %u", str);

    return 0;
}