/*
D
C C
B B B
A A A A
*/
#include <stdio.h>
int main()
{
  int n, i, j;
  char ch;
  printf("Enter the range = ");
  scanf("%d", &n);
  ch = 'A' + n - 1;
  for (i = 1; i <= n; i++, ch--)
  {
    for (j = 1; j <= i; j++)
      printf("%c ", ch);
    printf("\n");
  }

  return 0;
}