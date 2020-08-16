#include <stdio.h>

int main()
{
  int num;
  int carattere;
  int spazio;
  int count;

  do {
    printf("Inserisci il numero delle righe (dispari): ");
    scanf("%d", &num);
    printf("\n");

  }while ( (num < 0 || num > 19) || (num % 2 == 0) );


  for (carattere = 1; carattere >= num%2; carattere--){
    for (spazio = 1; spazio < carattere; spazio++){
      putchar(' ');
    }
    for (count = 0; count < spazio; count++){
      putchar('*');
    }
    printf("\n");
  }
  printf("\n");

  return 0;
}