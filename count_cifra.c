#include <stdio.h>

int main(void)
{
  int num;
  int count = 0;

  do {
    printf("Inserisca un intero positivo: ");
    scanf("%d", &num);

    if (num < 0){
      printf("\nPer favore, inserisca un numero positivo!\n\n");
    }

  } while (num < 0);

  return 0;
}
