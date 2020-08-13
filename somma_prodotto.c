#include <stdio.h>

int main()
{
  int somma = 0, pari;
  int prodotto = 1, dispari;

  printf("Somma dei numeri pari = ");
  for (pari = 2; pari <= 30; pari += 2) {
    somma += pari;
  }
  printf("%d\n", somma);

  printf("Prodotto dei numeri dispari = ");
  for (dispari = 1; dispari <= 15; dispari += 2) {
    prodotto *= dispari;
  }
  printf("%d\n", prodotto);

  return 0;
}