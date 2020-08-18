#include <stdio.h>

int main()
{
  int num[9];
  int count, count_2;
  double somma = 0;
  double media = 0;

  printf("Inserisci 10 numeri\n\n");
  for (count = 0, count_2 = 10; count < 10 || count_2 > 1; count++, count_2--) {
    printf("Inderiscine ancora %d: ", count_2);
    scanf("%d", &num[count]);
  }
  printf("\n");

  for (count = 0; count < 10; count++) {
    somma += num[count];
  }

  media = somma / 10;

  printf("Somma: %0.f\n", somma);
  printf("Media: %f\n", media);

  return 0;
}