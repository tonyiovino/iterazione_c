#include <stdio.h>

int main()
{
  int num[9];
  int count;

  for (count = 0; count < 10; count++) {
    printf("Indirizzo di num[%d]: %p", count, &num[count]);
    printf("\n");
  }

  return 0;
}