#include <stdio.h>

int main()
{
  int scelta;

  do {
    printf("1) Cripta\n2) Decripta\n");
    printf("Scegli: ");
    scanf("%d", &scelta);

    if (scelta != 1 && scelta != 2){
      printf("\nPer favore, inserisca una scelta disponibile!\n\n");
    }

  } while (scelta != 1 && scelta != 2);

  if (scelta == 1) {

    int num;
    int num1, num2, num3, num4;
    int criptato;

    printf("Inserisca un numero da criptare: ");
    scanf("%d", &num);

    num4 = num % 10;
    num /= 10;

    num3 = num % 10;
    num /= 10;

    num2 = num % 10;
    num /= 10;

    num1 = num;

    num1 = (num1 + 7) % 10;
    num2 = (num2 + 7) % 10;
    num3 = (num3 + 7) % 10;
    num4 = (num4 + 7) % 10;

    criptato = (num3 * 1000) + (num4 * 100) + (num1 * 10) + (num2 * 1);

    printf("%d\n", criptato);
  }

  else if (scelta == 2) {

    int num;
    int num1, num2, num3, num4;

    printf("Inserisca un numero da decriptare: ");
    scanf("%d", &num);

    num2 = num % 10;
    num /= 10;

    num1 = num % 10;
    num /= 10;

    num4 = num % 10;
    num /= 10;

    num3 = num;

    num2 = (num2 + 3) % 10 ;
    num1 = (num1 + 3) % 10 ;
    num4 = (num4 + 3) % 10 ;
    num3 = (num3 + 3) % 10 ;

    num = (num1 * 1000) + (num2 * 100) + (num3 * 10) + (num4 * 1);

    printf("Primo: %d, Secondo: %d, Terzo: %d, Quarto: %d\n", num1, num2, num3, num4);
    printf("%d\n", num);
  }

  return 0;
}