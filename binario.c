#include <stdio.h>
#include <math.h>

int main(void)
{
  int binario, decimale;
  int save_binario;
  int posizione = 0;
  int n_cifre;
  int cifra;
  int count = 0;
  double potenza;

  printf("Inserisca un numero binario: ");
  scanf("%d", &binario);

  save_binario = binario;

  while (binario != 0){
    n_cifre = binario % 10;
    binario /= 10;
  }

  binario = save_binario;

  do {
    while (posizione < n_cifre) {
        binario /= 10;
        cifra = binario % 10;
        potenza = pow( 2, posizione );
        decimale = cifra * potenza + decimale;
        printf("%d", decimale);
        count++;
        posizione++;
    }
  } while (posizione < n_cifre);

  return 0;
}