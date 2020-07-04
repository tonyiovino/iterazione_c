#include <stdio.h>

int main(void)
{
  int lato;
  int character = '*'; /*Carattere Speciale*/
  int larghezza = 0;
  int altezza;

  do {
    printf("Inserisci il lato (min 1, ma 20): ");
    scanf("%d", &lato);

    if(lato < 1 || lato > 20){
      printf("Valore fuori dai limiti!\n\n");
    }

  } while (lato < 1 || lato > 20);

  while(lato > larghezza){

    altezza = 0;
    while(lato > altezza){
      putchar(character);

      altezza++;
    }

    putchar('\n');
    
    larghezza++;
  }

  return 0;
}
