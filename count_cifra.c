#include <stdio.h>

int main(void)
{
  int num;
  int cifra;
  int sette = 0;;

  do {
    printf("Inserisca un intero positivo: ");
    scanf("%d", &num);

    if (num < 0){
      printf("\nPer favore, inserisca un numero positivo!\n\n");
    }

  } while (num < 0);

  while (num > 0){
    cifra = num % 10;
    num /= 10;
    if (cifra == 7){
      sette++;
    }
  }

  printf("%d\n", sette);

  return 0;
}
