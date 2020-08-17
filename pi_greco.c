#include <stdio.h>

int main()
{
  int num;
  int divisore = 1;
  int segno = 1;
  double pi_greco = 0;
  int count;

  printf("Inserisci il numero dei termini da usare: ");
  scanf("%d", &num);
  printf("\n");

  for (count = 0; count < num; count++, divisore+=2){
    pi_greco = pi_greco + segno * 4./divisore;
    segno = - segno;
  }
  printf("Pi Greco: %f", pi_greco);
  printf("\n");

  return 0;
}