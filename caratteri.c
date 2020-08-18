#include <stdio.h>

int main()
{
  char i_caratteri[] = "FL is better than Albeton";
  int count;

  for (count = 0; i_caratteri[count] > 0; count++) {
    printf("%c  ", i_caratteri[count]);
  }
  printf("\n");

  return 0;
}