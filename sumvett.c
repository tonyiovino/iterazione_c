#include <stdio.h>

int main()
{
  int num[10];
  int count;
  int somma = 0;
  double media = 0;

  printf("Inserisci 10 numeri\n\n");
  for (count = 0; count < 10; count++) {
    printf("Numero: ");
    scanf("%d", &num[count]);
  }
  printf("\n");

  for (count = 0; count < 10; count++) {
    somma += num[count];
  }

  media = (double)somma / 10.;

  printf("Somma: %d\n", somma);
  printf("Media: %f\n", media);

  return 0;
}