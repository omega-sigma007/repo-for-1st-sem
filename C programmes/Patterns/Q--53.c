/*
D C B A
C B A
B A
A
*/
#include <stdio.h>
int main()
{
  int i, j, n;
  char x, y;
  printf("Enter the range = ");
  scanf("%d", &n);
  x = 'A' + n - 1;
  for (i = n; i >= 1; i--, x--)
  {
    for (j = 1, y = x; j <= i; j++, y--)
      printf("%c ", y);
    printf("\n");
  }
  return 0; // done
}