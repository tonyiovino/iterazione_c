#include <stdio.h>

int main(void)
{
  int lato;
  int character = '$'; /*Carattere Speciale*/
  int larghezza;
  int altezza = 0;

  do {
    printf("Inserisci il lato (min 1, ma 20): ");
    scanf("%d", &lato);

    if(lato < 1 || lato > 20){
      printf("Valore fuori dai limiti!\n\n");
    }

  } while (lato < 1 || lato > 20);

  while(altezza < lato){

    larghezza = 0;
    while(larghezza < lato){
      putchar(character);

      larghezza++;
    }

    putchar('\n');
    
    altezza++;
  }

  return 0;
}
