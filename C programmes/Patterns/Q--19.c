/*
= * * *
* = * *
* * = *
* * * =
*/
#include <stdio.h>
int main()
{
  int i, j, n;
  printf("Enter the range = ");
  scanf("%d", &n);
  /*
  Assuming :-
  1 2 3 4
  1 2 3 4
  1 2 3 4
  1 2 3 4
  */
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
    {
      if (i == j)
        printf("= ");
      else
        printf("* ");
    }
    printf("\n");
  }
  return 0;
}