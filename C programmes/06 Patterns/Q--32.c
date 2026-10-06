/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/
#include <stdio.h>
void main()
{
  int i, j, sp, n, k;
  printf("Enter the range = ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (sp = n - 1; sp >= i; sp--)
      printf("  ");
    for (j = 1; j <= i; j++)
      printf("%d ", j);
    for (j = i - 1; j >= 1; j--)
      printf("%d ", j);
    printf("\n");
  }
}