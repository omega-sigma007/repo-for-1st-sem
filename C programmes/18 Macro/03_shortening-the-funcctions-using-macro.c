#include <stdio.h>
#include <string.h>
#define iinput(i) scanf("%d", &i)
#define cinput(c) scanf("%c", &c)
#define finput(f) scanf("%f", &f)
#define sinput(s) scanf("%[^\n]", s)
#define pr printf
#define iprint(i) printf("%d\n", i)
#define fprint(f) printf("%.3f\n", f)
#define cprint(c) printf("%c\n", c)
#define sprint(s) printf("%s\n", s)
#define next pr("\n")
int main()
{
    int u;
    float v;
    char w, x[20];
    pr("int = ");
    iinput(u);
    pr("float = ");
    finput(v);
    printf("char = ");
    scanf("%c", &w);
    pr("str = ");
    sinput(x);

    iprint(u);
    fprint(v);
    cprint(w);
    sprint(x);
}