#include <stdio.h>
#include <string.h>
#define iinput(i) scanf("%d", &i)
#define cinput(c) scanf("%c", &c)
#define finput(f) scanf("%f", &f)
#define sinput(s) scanf("%[^\n]", &s)
#define pr printf
#define iprint(i) printf("%d\n", i)
#define fprint(f) printf("%.3f\n", f)
#define cprint(c) printf("%c\n", c)
#define sprint(s) printf("%s\n", s)
#define next pr("\n")
int main()
{
    int a;
    float b;
    char c = 'a', d[20];
    pr("Enter int = ");
    iinput(a);
    // pr("Enter char = ");
    // scanf("%c", &c);
    pr("Enter float = ");
    finput(b);
    pr("Enter str = ");
    sinput(d);
    iprint(a);
    fprint(b);
    putchar(c);
    sprint(d);
}