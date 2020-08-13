#include <stdio.h>
#include <math.h>

int main(void)
{
  int binario, decimale = 0;
  int save_binario;
  int peso = 1;

  printf("Inserisca un numero binario: ");
  scanf("%d", &binario);

  save_binario = binario;

  while (binario > 0) {
    if (binario % 10 > 0){
      decimale += peso;
    }
    binario /= 10;
    peso *= 2;
  }

  binario = save_binario;

  printf("%d(2) ==> %d(10)\n", binario, decimale);


  return 0;
}