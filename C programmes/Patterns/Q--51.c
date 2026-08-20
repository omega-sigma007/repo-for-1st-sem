/*
A
A B
A B C
A B C D
*/
#include <stdio.h>
int main()
{
  int i, j, n;
  char ch;
  printf("Enter the number = ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (j = 1, ch = 'A'; j <= i; j++, ch++)
      printf("%c ", ch);

    printf("\n");
  }
  return 0;
}