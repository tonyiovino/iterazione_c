#include <stdio.h>

int main()
{
  char i_caratteri[] = "FL is better than Albeton";
  int i;

  for (i = 0; i_caratteri[i] != 0; i++) {
    printf("%c  ", i_caratteri[i]);
  }
  printf("\n");

  return 0;
}