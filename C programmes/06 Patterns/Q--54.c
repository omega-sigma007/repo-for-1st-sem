/*
D C B A
D C B
D C
D

*/
#include <stdio.h>
int main()
{
  int n, i, j;
  char ch = 'A';
  printf("Enter the range = ");
  scanf("%d", &n);
  for (i = n; i >= 1; i--)
  {
    for (j = 1, ch += n - 1; j <= i; j++, ch--)
      printf("%c ", ch);
    printf("\n");
  }
  return 0;
}