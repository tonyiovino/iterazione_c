#include <stdio.h>

int main()
{
  int num = 0;
  int num1, num2, num4, num5;

  do {
    printf("Inserisci un numero a cinque cifre: ");
    scanf("%d", &num);

  } while (num < 0 || num > 99999);

  /*5a cifra*/
  num5 = num % 10;
  num /= 10;

  /*4a cifra*/
  num4 = num % 10;
  num /= 10;

  /*La 3a cifra non và salvata in una sua variabile, poiché inutile*/
  /*Ma scaliamo di numero*/
  num /= 10;

  /*2a cifra*/
  num2 = num % 10;
  num /= 10;

  /*1a cifra*/
  num1 = num;

  printf("È un palindromo?\n");
  if (num1 == num5 && num2 == num4) {
    printf("Si.\n");
  }

  else {
    printf("No.\n");
  }


  return 0;
}
