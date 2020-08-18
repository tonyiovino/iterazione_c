#include <stdio.h>

int main()
{
  int num;
  int divisore;
  int segno = 1;
  double pi_greco = 0;
  int count;

  printf("Inserisci il numero dei termini da usare: ");
  scanf("%d", &num);
  printf("\n");

  for (count = 0, divisore = 1; count < num; count++, divisore+=2){
    pi_greco = pi_greco + segno * 4./divisore;
    segno = - segno;
  }
  printf("Pi Greco: %f", pi_greco);
  printf("\n");

  return 0;
}